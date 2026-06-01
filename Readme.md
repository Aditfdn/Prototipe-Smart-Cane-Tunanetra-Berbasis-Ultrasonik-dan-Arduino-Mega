# Rancang Bangun Tongkat Pintar guna Membantu Mobilitas dan Keselamatan Penyandang Tuna Netra Berbasis ATmega2560 melalui Sistem Deteksi Halangan dan Peringatan Getar dalam Mendukung SDG No. 10 dan 11 (Reduced Inequalities & Sustainable Cities)
![image_alt](https://github.com/Aditfdn/S-CANE_Smart-Cane-for-Avoidance-and-Notifying-Electronics/blob/2e3c4d90a7f616f61bcd43fe882141f1206f676c/Assets/Logo/Logo.png)
## Deskripsi Proyek


Proyek ini mengembangkan **Tongkat Pintar (Smart White Cane)** berbasis **ATmega2560** yang dirancang untuk membantu mobilitas, keselamatan, dan kemandirian penyandang tuna netra dalam beraktivitas sehari-hari. Sistem mengintegrasikan teknologi deteksi lingkungan, peringatan taktil, serta komunikasi darurat secara real-time guna mendukung implementasi **SDG No. 10 (Reduced Inequalities)** dan **SDG No. 11 (Sustainable Cities and Communities)**.

Tongkat pintar ini memanfaatkan **sensor ultrasonik HC-SR04** untuk mendeteksi keberadaan halangan atau rintangan di depan pengguna. Selain itu, **Rain Sensor** digunakan untuk mendeteksi genangan air atau permukaan jalan yang basah sehingga pengguna dapat menghindari area yang berpotensi membahayakan. Informasi dari kedua sensor tersebut diproses oleh **mikrokontroler ATmega2560** dan diterjemahkan menjadi peringatan berupa getaran melalui **Motor Vibrator** serta bunyi melalui **Buzzer**, sehingga dapat dipahami dengan mudah oleh pengguna tuna netra.

Untuk meningkatkan aspek keselamatan, sistem dilengkapi **Panic Button** yang dapat ditekan pengguna ketika berada dalam kondisi darurat. Saat tombol ditekan, mikrokontroler akan mengaktifkan **modul SIM800L** untuk mengirimkan pesan notifikasi darurat ke akun **Telegram** yang telah terhubung sebelumnya. Fitur ini memungkinkan keluarga, pendamping, atau pihak terkait menerima informasi keadaan darurat secara cepat sehingga bantuan dapat segera diberikan.

Dengan menggabungkan sistem deteksi hambatan, deteksi genangan air, peringatan multimodal, dan komunikasi darurat berbasis Telegram, tongkat pintar ini diharapkan mampu meningkatkan aksesibilitas, keamanan, dan kualitas hidup penyandang tuna netra dalam beraktivitas di lingkungan perkotaan yang inklusif dan berkelanjutan.


## Tujuan Proyek

1. Meningkatkan Aksesibilitas dan Mobilitas Mandiri
Merancang alat bantu jalan yang adaptif untuk mempermudah penyandang tuna netra dalam bernavigasi di lingkungan luar ruangan (outdoor) tanpa ketergantungan penuh pada orang lain.
2. Membangun Sistem Deteksi Bahaya Multilevel
Mengintegrasikan sensor jarak (HC-SR04) dan sensor permukaan basah (Rain Sensor) untuk mengidentifikasi berbagai jenis rintangan fisik maupun genangan air di jalanan secara akurat.
3. Mengoptimalkan Respons Peringatan Dinamis
Menerapkan sistem umpan balik ganda berupa getaran (haptic tactile) melalui Motor Vibrator dan bunyi via Buzzer yang intuitif serta mudah dipahami oleh indra peraba dan pendengaran pengguna.
4. Menyediakan Fitur Keselamatan Darurat Jarak Jauh (Safety Guard via GSM)
Memanfaatkan sensor MPU-6050 untuk mendeteksi anomali kemiringan ekstrem (jatuh) dan Panic Button untuk memicu pengiriman pesan darurat otomatis berupa SMS secara real-time ke pendamping melalui modul GSM SIM800L.
5. Mendukung Implementasi Target SDGs Global
Berkontribusi nyata dalam pencapaian Sustainable Development Goals melalui inovasi teknologi inklusif yang berfokus pada SDG 9 (Industry, Innovation, and Infrastructure), SDG 10 (Reduced Inequalities), dan SDG 11 (Sustainable Cities and Communities).

## Support By :
> * Dosen Pengampu: Akhmad Hendriawan ST., MT. (NIP. 197501272002121003)
> * Mata Kuliah: Mikrokontroler
> * Program Studi: D4 Teknik Elektronika
> * Politeknik Elektronika Negeri Surabaya


## Anggota Tim

| NRP | Nama | Jobdesk | Akun |
| :--- | :--- | :--- | :--- |
| 2124600054 | Ferdian Yuly Aditya | Project Manager | [Aditfdn](https://github.com/Aditfdn) |
| 2124600039 | Joseph Frederick Tora  | Hardware Specialist | [josephtora](https://github.com/josephtora) |
| 2124600052 | Achmad Nico Al Gofir | 3D Designer | [Oc1nn](https://github.com/Oc1nn) |
| 2124600055 | Muhammad Zaky Awwaludin Hani | Progammer | [Cheesejek](https://github.com/CheeseJek) |
| 2124600050 | Muhammad Rifqy Prasetiyo| UI/UX Designer | [Rifqypaypal]() |
| 2124600060 | Delvia Pramesti Regita Cahyani | QA | [delviap](https://github.com/delviap) |



## Komponen
> * Rain Sensor
> * Motor Vibrator
> * Arduino ATmega 2560
> * HC-SR04 / Sensor Ultrasonik
> * MPU-6050 / Sensor Gyroscope
> * Buzzer
> * Button / Panic Button
> * SIM800L
