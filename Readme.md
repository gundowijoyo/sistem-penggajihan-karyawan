# Sistem Penggajian Karyawan

Sistem Penggajian Karyawan adalah aplikasi sederhana yang dibuat menggunakan bahasa pemrograman C++. Aplikasi ini digunakan untuk mengelola data karyawan dan menghitung gaji mereka berdasarkan jam kerja, potongan, dan bonus.

## Fitur

1. **Tambah Karyawan**
   - Menambahkan data karyawan baru ke dalam sistem.
2. **Tampilkan Slip Gaji**
   - Menampilkan slip gaji untuk karyawan berdasarkan ID.
3. **Laporan Bulanan**
   - Menampilkan laporan bulanan dari semua karyawan.
4. **Keluar**
   - Keluar dari aplikasi.

## Prasyarat

Pastikan Anda telah menginstal compiler C++ di sistem Anda. Untuk Linux dan Mac, GCC (GNU Compiler Collection) biasanya sudah terinstal. Untuk Windows, Anda bisa menggunakan MinGW atau compiler lainnya.

## Cara Menggunakan

1. **Clone repository ini:**
   ```sh
   git clone https://github.com/guns-joy/sistem-penggajihan-karyawan.git
   ```
2. **Masuk direktori**
  ```sh 
 cd penggajihan-karyawan
   ```
3. **Kompilasi program**
   ```sh
   g++ payroll_system.cpp -o payroll_system
   ```
4. **Jalankan program**
   ```sh
   ./payroll_system
   ```
## Preview Menu 

<pre>
   Sistem Penggajian Karyawan
1. Tambah Karyawan
2. Tampilkan Slip Gaji
3. Laporan Bulanan
4. Keluar
Masukkan pilihan: 
</pre>

## Struktur Program 

<pre>
   Struktur Program
Program ini menggunakan struktur data sederhana untuk menyimpan informasi karyawan. Berikut adalah penjelasan singkat dari setiap bagian program:

1. Struktur Karyawan: Menyimpan data karyawan, termasuk ID, nama, jam kerja, gaji per jam, potongan, dan bonus.
   
2. Fungsi tambahKaryawan: Menambahkan data karyawan baru ke dalam daftar.
   
3. Fungsi hitungGajiBersih: Menghitung gaji bersih karyawan.

4. Fungsi tampilkanSlipGaji: Menampilkan slip gaji untuk karyawan berdasarkan ID.
   
5. Fungsi laporanBulanan: Menampilkan laporan bulanan dari semua karyawan.
   
6. Fungsi main: Menampilkan menu utama dan memproses pilihan pengguna.
</pre>
