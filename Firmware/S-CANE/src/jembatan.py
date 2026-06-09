import serial

COM_OUTPUT = "COM2"  # ganti sesuai com0com pasanganmu
WOKWI_HOST = "localhost"
WOKWI_PORT = 4000

print(f"Menghubungkan ke Wokwi RFC2217 port {WOKWI_PORT}...")
wokwi = serial.serial_for_url(
    f"rfc2217://{WOKWI_HOST}:{WOKWI_PORT}",
    baudrate=9600,
    timeout=1
)

print(f"Membuka COM output: {COM_OUTPUT}...")
com_out = serial.Serial(COM_OUTPUT, baudrate=9600, timeout=1)

print("Jembatan aktif. Ctrl+C untuk berhenti.\n")

while True:
    try:
        data = wokwi.readline()
        if data:
            teks = data.decode(errors='ignore').strip()
            print(f"[Wokwi] {teks}")
            com_out.write(data)
    except KeyboardInterrupt:
        print("\nDihentikan.")
        break
    except Exception as e:
        print(f"Error: {e}")
        break

wokwi.close()
com_out.close()