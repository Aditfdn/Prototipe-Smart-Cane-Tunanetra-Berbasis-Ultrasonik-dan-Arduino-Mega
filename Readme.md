<h1 align="center">Rancang Bangun Tongkat Pintar guna Membantu Mobilitas dan Keselamatan Penyandang Tuna Netra Berbasis ATmega2560 melalui Sistem Deteksi Halangan dan Peringatan Getar dalam Mendukung SDG No. 10 dan 11 (Reduced Inequalities & Sustainable Cities)</h1>

![image_alt](https://github.com/Aditfdn/S-CANE_Smart-Cane-for-Avoidance-and-Notifying-Electronics/blob/2e3c4d90a7f616f61bcd43fe882141f1206f676c/Assets/Logo/Logo.png)

## Deskripsi Proyek
Proyek ini mengembangkan **Tongkat Pintar (Smart White Cane)** berbasis **ATmega2560** yang dirancang untuk membantu mobilitas, keselamatan, dan kemandirian penyandang tuna netra dalam beraktivitas sehari-hari. Sistem mengintegrasikan teknologi deteksi lingkungan, peringatan taktil, serta komunikasi darurat secara real-time guna mendukung implementasi **SDG No. 10 (Reduced Inequalities)** dan **SDG No. 11 (Sustainable Cities and Communities)**.

Tongkat pintar ini memanfaatkan **sensor ultrasonik HC-SR04** untuk mendeteksi keberadaan halangan atau rintangan di depan pengguna. Selain itu, **Rain Sensor** digunakan untuk mendeteksi genangan air atau permukaan jalan yang basah sehingga pengguna dapat menghindari area yang berpotensi membahayakan. Informasi dari kedua sensor tersebut diproses oleh **mikrokontroler ATmega2560** dan diterjemahkan menjadi peringatan berupa getaran melalui **Motor Vibrator** serta bunyi melalui **Buzzer**, sehingga dapat dipahami dengan mudah oleh pengguna tuna netra.

Untuk meningkatkan aspek keselamatan, sistem dilengkapi **Panic Button** yang dapat ditekan pengguna ketika berada dalam kondisi darurat. Saat tombol ditekan, mikrokontroler akan mengaktifkan **modul SIM800L** untuk mengirimkan pesan notifikasi darurat ke akun **Telegram** yang telah terhubung sebelumnya. Fitur ini memungkinkan keluarga, pendamping, atau pihak terkait menerima informasi keadaan darurat secara cepat sehingga bantuan dapat segera diberikan.

Dengan menggabungkan sistem deteksi hambatan, deteksi genangan air, peringatan multimodal, dan komunikasi darurat berbasis Telegram, tongkat pintar ini diharapkan mampu meningkatkan aksesibilitas, keamanan, dan kualitas hidup penyandang tuna netra dalam beraktivitas di lingkungan perkotaan yang inklusif dan berkelanjutan.


## Tujuan Proyek

1. Merancang alat bantu jalan adaptif guna meningkatkan mobilitas mandiri dan keamanan penyandang tuna netra di lingkungan luar ruangan (outdoor).
2. Mengintegrasikan sensor ultrasonik (HC-SR04) dan rain sensor untuk mendeteksi rintangan fisik serta genangan air di jalan secara real-time.
3. Menerapkan sistem umpan balik ganda berupa peringatan getar (motor vibrator) dan suara (buzzer) yang intuitif bagi indra peraba dan pendengaran pengguna.
4. Menyediakan fitur keselamatan darurat berbasis GSM (SIM800L) untuk mengirimkan SMS peringatan otomatis secara real-time saat pengguna menekan tombol panik atau terdeteksi jatuh oleh sensor MPU-6050.
5. Mendukung pencapaian target SDGs global, khususnya SDG 9 (Industry, Innovation, and Infrastructure), SDG 10 (Reduced Inequalities), dan SDG 11 (Sustainable Cities and Communities).


## Support By :
![image_alt](https://github.com/Aditfdn/S-CANE_Smart-Cane-for-Avoidance-and-Notifying-Electronics/blob/1a7dc825d6dbe5c77c79c06e034372277215469f/Assets/Foto%20Anggota%20Kelompok%205.jpeg)
> * Dosen Pengampu: Akhmad Hendriawan ST., MT. (NIP. 197501272002121003)
> * Mata Kuliah: Mikrokontroler
> * Program Studi: D4 Teknik Elektronika
> * Politeknik Elektronika Negeri Surabaya


## Anggota Tim

| Foto | NRP | Nama | Jobdesk | Akun |
| :---: | :---: | :---: | :---: | :---: |
| <img src="Assets/Foto Identitas/Ferdian Yuly Aditya.jpeg" width="100px"> | 2124600054 | Ferdian Yuly Aditya | Project Manager | [Aditfdn](https://github.com/Aditfdn) |
| <img src="Assets/Foto Identitas/Joseph Frederick Tora.jpeg" width="100px"> | 2124600039 | Joseph Frederick Tora  | Hardware Specialist | [josephtora](https://github.com/josephtora) |
| <img src="Assets/Foto Identitas/Achmad Nico Al Gofir.jpeg" width="100px"> | 2124600052 | Achmad Nico Al Gofir | 3D Designer | [Oc1nn](https://github.com/Oc1nn) |
| <img src="Assets/Foto Identitas/Muhammad Zaky Awwaludin Hani_Jas.png" width="100px"> | 2124600055 | Muhammad Zaky Awwaludin Hani | Progammer | [Cheesejek](https://github.com/CheeseJek) |
| <img src="Assets/Foto Identitas/Muhammad Rifqy Prasetiyo.jpg" width="100px"> | 2124600050 | Muhammad Rifqy Prasetiyo| UI/UX Designer | [Rifqypaypal](https://github.com/Rifqypaypal) |
| <img src="Assets/Foto Identitas/Delvia Pramesti Regita Cahyani.jpg" width="100px"> | 2124600060 | Delvia Pramesti Regita Cahyani | QA | [delviap](https://github.com/delviap) |

### 🎬 Video Iklan & Promosi Produk

Simak video promosi sinematik S-CANE di bawah ini untuk melihat bagaimana teknologi inklusif berbasis ATmega2560 ini bekerja dalam membantu mobilitas mandiri penyandang tunanetra secara nyata:


https://github.com/user-attachments/assets/0be7c7a5-2033-4274-8515-4979ece7c445



> 💡 **Informasi Video:** Video promosi ini mencakup latar belakang permasalahan mobilitas disabilitas, visualisasi desain fisik casing 3D, serta demonstrasi langsung penanganan kondisi darurat (SOS) yang terintegrasi dengan Telegram pendamping.

## Komponen
![image_alt](https://github.com/Aditfdn/S-CANE_Smart-Cane-for-Avoidance-and-Notifying-Electronics/blob/3324ea9c473ea72740842fd4290feda3aa289251/Block%20Diagram/BLOK%20DIAGRAM.png)
> * Rain Sensor
> * Motor Vibrator
> * Arduino ATmega 2560
> * HC-SR04 / Sensor Ultrasonik
> * MPU-6050 / Sensor Gyroscope
> * Buzzer
> * Button / Panic Button
> * SIM800L

## 🎨 3D Design & Prototyping
Berikut adalah hasil rancangan 3D dari S-CANE yang dikembangkan menggunakan software [Sebutkan Software, misal: Autodesk Inventor]:

| Tampilan Depan | Tampilan Samping |
| :---: | :---: |
| ![Desain 1](https://github.com/Aditfdn/S-CANE_Smart-Cane-for-Avoidance-and-Notifying-Electronics/blob/fe9fe746f50363f90342c06611801b971ff54560/3D%20Design/Photo%20Preview/Front.PNG) | ![Desain 2](https://github.com/Aditfdn/S-CANE_Smart-Cane-for-Avoidance-and-Notifying-Electronics/blob/fe9fe746f50363f90342c06611801b971ff54560/3D%20Design/Photo%20Preview/Left.PNG) |

> *Catatan: Desain ini dibuat untuk memastikan ergonomi dan penempatan sensor yang optimal pada tongkat.*

## 📱 UI/UX Design & Simulasi Sistem

Untuk mendukung fungsionalitas S-CANE, dikembangkan juga sebuah konsep antarmuka (UI/UX) aplikasi mobile yang berfungsi sebagai pusat kendali, monitoring status baterai, serta pelacakan lokasi pengguna tongkat secara real-time.

### 🎥 Video Simulasi & Demo UI/UX
Berikut adalah simulasi interaktif dari prototipe UI/UX aplikasi S-CANE:

[Drop/Drag file video simulasi .mp4 Anda di sini sesuai tutorial sebelumnya]

---

### 🎨 Alur Kerja Antarmuka (User Flow)
Sistem antarmuka dirancang dengan mengutamakan aksesibilitas tinggi dan kemudahan navigasi bagi keluarga atau pendamping tunanetra:

![image_alt](https://github.com/Aditfdn/S-CANE_Smart-Cane-for-Avoidance-and-Notifying-Electronics/blob/fe9fe746f50363f90342c06611801b971ff54560/UI%20UX%20Design/design/user-flow.png)

1. **Dashboard Utama:** Menampilkan status konektivitas tongkat, indikator baterai ATmega2560, dan kondisi cuaca di sekitar pengguna (terintegrasi dengan *Rain Sensor*).
2. **Sistem Notifikasi Darurat:** Antarmuka khusus yang akan memicu alarm di sisi pendamping secara otomatis ketika *Panic Button* pada tongkat ditekan atau saat sensor MPU-6050 mendeteksi pengguna terjatuh.
3. **Integrasi Telegram Bot:** Simulasi pengiriman data koordinat dan pesan teks otomatis dari modul SIM800L ke aplikasi Telegram.

### 📐 Galeri Antarmuka
| Splash Screen & Login | Dashboard Monitoring | Notifikasi Darurat |
| :---: | :---: | :---: |
| ![image_alt](https://github.com/Aditfdn/S-CANE_Smart-Cane-for-Avoidance-and-Notifying-Electronics/blob/fe9fe746f50363f90342c06611801b971ff54560/UI%20UX%20Design/design/login.png) | ![image_alt](https://github.com/Aditfdn/S-CANE_Smart-Cane-for-Avoidance-and-Notifying-Electronics/blob/fe9fe746f50363f90342c06611801b971ff54560/UI%20UX%20Design/design/dashboard.png) | ![image_alt](https://github.com/Aditfdn/S-CANE_Smart-Cane-for-Avoidance-and-Notifying-Electronics/blob/fe9fe746f50363f90342c06611801b971ff54560/UI%20UX%20Design/design/notifikasi-keluarga.png) |

### 🎥 Video Simulasi & Demo UI/UX
Berikut adalah video demonstrasi interaktif prototipe dan jalannya aplikasi pendukung S-CANE:


https://github.com/user-attachments/assets/26122700-60ff-4c79-a8bb-ca77b9de54d8

## 🎬 Video Simulasi Sistem Keseluruhan

Selain pemodelan antarmuka, pengujian fungsionalitas logika program ATmega2560 pada proyek S-CANE ini juga didokumentasikan melalui simulasi interaktif. Video ini menampilkan bagaimana seluruh sensor (HC-SR04, Rain Sensor, MPU-6050) merespons lingkungan dan mengirimkan data secara sinkron ke aktuator serta sistem peringatan.

### 📺 Demo Simulasi Alat


https://github.com/user-attachments/assets/4040b269-2278-43a4-b501-594f7b9bb5d2



> 💡 **Informasi Pengujian:** > * **Simulasi Input:** Simulasi pembacaan jarak rintangan dan deteksi kondisi jalan basah/genangan air.
> * **Simulasi Output:** Respons kedipan frekuensi buzzer, kekuatan getaran motor vibrator, serta simulasi pengiriman instruksi AT Command oleh modul GSM SIM800L.








