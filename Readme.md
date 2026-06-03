# Rancang Bangun Tongkat Pintar guna Membantu Mobilitas dan Keselamatan Penyandang Tuna Netra Berbasis ATmega2560 melalui Sistem Deteksi Halangan dan Peringatan Getar dalam Mendukung SDG No. 10 dan 11 (Reduced Inequalities & Sustainable Cities)
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
> * Dosen Pengampu: Akhmad Hendriawan ST., MT. (NIP. 197501272002121003)
> * Mata Kuliah: Mikrokontroler
> * Program Studi: D4 Teknik Elektronika
> * Politeknik Elektronika Negeri Surabaya


## Anggota Tim

| Foto | NRP | Nama | Jobdesk | Akun |
| :---: | :---: | :---: | :---: | :---: |
| <img src="Assets/Foto Identitas/Ferdian Yuly Aditya.jpeg" width="100px"> | 2124600054 | Ferdian Yuly Aditya | Project Manager | [Aditfdn](https://github.com/Aditfdn) |
| <img src="Assets/Foto Identitas/Joseph Frederick Tora.jpg" width="100px"> | 2124600039 | Joseph Frederick Tora  | Hardware Specialist | [josephtora](https://github.com/josephtora) |
| <img src="Assets/Foto Identitas/Achmad Nico Al Gofir.jpeg" width="100px"> | 2124600052 | Achmad Nico Al Gofir | 3D Designer | [Oc1nn](https://github.com/Oc1nn) |
| <img src="Assets/Foto Identitas/Muhammad Zaky Awwaludin Hani_Jas.png" width="100px"> | 2124600055 | Muhammad Zaky Awwaludin Hani | Progammer | [Cheesejek](https://github.com/CheeseJek) |
| <img src="Assets/Foto Identitas/Muhammad Rifqy Prasetiyo.jpg" width="100px"> | 2124600050 | Muhammad Rifqy Prasetiyo| UI/UX Designer | [Rifqypaypal](https://github.com/Rifqypaypal) |
| <img src="Assets/Foto Identitas/Delvia Pramesti Regita Cahyani.jpg" width="100px"> | 2124600060 | Delvia Pramesti Regita Cahyani | QA | [delviap](https://github.com/delviap) |



## Komponen
> * Rain Sensor
> * Motor Vibrator
> * Arduino ATmega 2560
> * HC-SR04 / Sensor Ultrasonik
> * MPU-6050 / Sensor Gyroscope
> * Buzzer
> * Button / Panic Button
> * SIM800L
