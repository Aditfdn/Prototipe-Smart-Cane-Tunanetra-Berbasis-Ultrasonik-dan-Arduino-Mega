#include <Arduino.h>
#include <Wire.h>
#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include <MPU6050.h>

// ── Pin definitions ─────────────────────────────
// ATmega2560 port mapping:
// Pin 22 = PA0 (TRIG), Pin 23 = PA1 (ECHO)
// Pin 6  = PH3 (BUZZER, OC4A), Pin 7 = PH4 (VIBRATOR, OC4B)
// Pin 2  = PE4 (PANIC, INT4)
// A0 = PF0 (ADC0), A1 = PF1 (ADC1)

#define TRIG_PIN    22
#define ECHO_PIN    23
#define BUZZER_PIN  6
#define VIB_PIN     7
#define PANIC_PIN   2

#define RAIN_CH     0   // A0 = ADC channel 0
#define BAT_CH      1   // A1 = ADC channel 1

MPU6050 mpu;

// ── ADC ─────────────────────────────────────────
void adc_init() {
  ADMUX  = (1 << REFS0);                    // referensi AVcc
  ADCSRB = 0;                               // MUX5=0, channel 0-7
  ADCSRA = (1 << ADEN)                      // ADC enable
         | (1 << ADPS2)
         | (1 << ADPS1)
         | (1 << ADPS0);                   // prescaler 128 → 125kHz @ 16MHz
}

uint16_t adc_read(uint8_t ch) {
  ADMUX  = (1 << REFS0) | (ch & 0x07);     // set channel, jaga REFS
  ADCSRB &= ~(1 << MUX5);                  // channel 0-7, bukan 8-15
  ADCSRA |= (1 << ADSC);                   // mulai konversi
  while (ADCSRA & (1 << ADSC));            // tunggu selesai
  return ADC;                               // baca hasil 10-bit
}

void uart0_init(uint32_t baud) {
  uint16_t ubrr = F_CPU / 16 / baud - 1;
  UBRR0H = (uint8_t)(ubrr >> 8);
  UBRR0L = (uint8_t)(ubrr);
  UCSR0B = (1 << TXEN0) | (1 << RXEN0);    // TX dan RX enable
  UCSR0C = (1 << UCSZ01) | (1 << UCSZ00); // frame 8N1
}

void uart0_putc(char c) {
  while (!(UCSR0A & (1 << UDRE0)));        // tunggu buffer kosong
  UDR0 = c;
}

void uart0_puts(const char *s) {
  while (*s) uart0_putc(*s++);
}

void uart0_putnum(long n) {
  if (n < 0) { uart0_putc('-'); n = -n; }
  if (n == 0) { uart0_putc('0'); return; }
  char buf[12];
  uint8_t i = 0;
  while (n > 0) { buf[i++] = '0' + (n % 10); n /= 10; }
  // reverse buffer supaya urutan digit benar
  uint8_t j = 0, k = i - 1;
  while (j < k) { char t = buf[j]; buf[j] = buf[k]; buf[k] = t; j++; k--; }
  for (uint8_t x = 0; x < i; x++) uart0_putc(buf[x]);
}

// ── UART1 (Serial ke SIM800L) ────────────────────
void uart1_init(uint32_t baud) {
  uint16_t ubrr = F_CPU / 16 / baud - 1;
  UBRR1H = (uint8_t)(ubrr >> 8);
  UBRR1L = (uint8_t)(ubrr);
  UCSR1B = (1 << TXEN1);                   // TX saja, tidak butuh RX
  UCSR1C = (1 << UCSZ11) | (1 << UCSZ10); // frame 8N1
}

void uart1_putc(char c) {
  while (!(UCSR1A & (1 << UDRE1)));
  UDR1 = c;
}

void uart1_puts(const char *s) {
  while (*s) uart1_putc(*s++);
}

// ── HC-SR04 ──────────────────────────────────────
// pulseIn() tetap dipakai karena implementasi bare metal
// membutuhkan timer capture yang konflik dengan tone()
long hcsr04_cm() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
  long dur = pulseIn(ECHO_PIN, HIGH, 30000); // timeout 30ms
  return dur * 0.034 / 2;
}

// ── GPIO bare metal untuk vibrator ───────────────
// Pin 7 = PH4
void vib_on() {
  DDRH  |=  (1 << PH4);  // set output
  PORTH |=  (1 << PH4);  // set HIGH
}

void vib_off() {
  DDRH  |=  (1 << PH4);
  PORTH &= ~(1 << PH4);  // set LOW
}

// ── Baca panic button bare metal ─────────────────
// Pin 2 = PE4
uint8_t panic_read() {
  return (PINE & (1 << PE4)) ? 1 : 0; // 0 = ditekan (LOW), 1 = lepas
}

// ── Kirim SMS darurat ────────────────────────────
void kirim_sms() {
  uart0_puts("Mengirim SMS via SIM800L...\r\n");
  uart1_puts("AT+CMGS=\"+6281234567890\"\r\n");
  _delay_ms(1000);
  uart1_puts("Peringatan S-CANE: Pengguna dalam kondisi DARURAT! ");
  uart1_puts("Tombol panic ditekan atau pengguna terdeteksi jatuh.");
  uart1_putc(26);   // CTRL+Z → eksekusi kirim SMS
  _delay_ms(2000);
}

// ────────────────────────────────────────────────
void setup() {
  adc_init();
  uart0_init(9600);
  uart1_init(9600);

  // GPIO init
  pinMode(TRIG_PIN,   OUTPUT);
  pinMode(ECHO_PIN,   INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  DDRH  |=  (1 << PH4);              // VIB_PIN output
  DDRE  &= ~(1 << PE4);              // PANIC_PIN input
  PORTE |=  (1 << PE4);              // pullup internal PANIC

  Wire.begin();
  mpu.initialize();
  _delay_ms(1000);

  uart0_puts("S-CANE Berhasil Dinyalakan...\r\n");
  uart1_puts("AT+CMGF=1\r\n");
  _delay_ms(500);
}

void loop() {
  // ── Baca semua sensor ────────────────────────
  long     dist  = hcsr04_cm();
  uint16_t air   = adc_read(RAIN_CH);
  uint16_t bat   = adc_read(BAT_CH);

  int16_t ax, ay, az, gx, gy, gz;
  mpu.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);
  int16_t absAz = abs(az);

  uint8_t panic = panic_read(); // 0=ditekan, 1=lepas

  // ── Halangan depan ───────────────────────────
  if (dist > 0 && dist < 50) {
    vib_on();
    tone(BUZZER_PIN, 1000, 100);
  } else {
    vib_off();
  }

  // ── Genangan air ─────────────────────────────
  if (air > 500) tone(BUZZER_PIN, 500, 500);

  // ── Darurat: panic atau tongkat jatuh ────────
  if (panic == 0 || absAz > 12000) {
    tone(BUZZER_PIN, 2000, 0);
    kirim_sms();
    noTone(BUZZER_PIN);
  }

  // ── Kirim data ke browser ─────────────────────
  // Format: DATA:jarak,air,absAz,panicState,bat
  uart0_puts("DATA:");
  uart0_putnum(dist);  uart0_putc(',');
  uart0_putnum(air);   uart0_putc(',');
  uart0_putnum(absAz); uart0_putc(',');
  uart0_putnum(panic); uart0_putc(',');
  uart0_putnum(bat);   uart0_puts("\r\n");

  _delay_ms(200);
}
