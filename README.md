## Mini Proyek – Coding untuk Kakak Tingkat
## Identitas Mahasiswa
Nama	: Fahri Bintang Maulana
Kelas	: 2A PSTI
NIM	: 2401706
## Identitas Kakak Tingkat
Nama	: Arifal Muhammad Iqbal
Kelas	: 6A PSTI
NIM	: 2202397
## Permintaan Program
[4/5 16.04] Kang Arifal (KWU): Deskripsi: Program ini menerima input harga barang dan jumlah uang yang dibayar oleh pembeli. Kemudian program akan menghitung dan menampilkan jumlah kembalian serta memecah kembalian tersebut ke dalam pecahan uang (misalnya: 2 lembar 5.000, 1 lembar 2.000, dll). Fitur Utama: Input: harga total dan uang yang dibayar Output: total kembalian dan pecahannya Gunakan array untuk menyimpan pecahan uang (misal: [100000, 50000, 20000, ..., 1000]) Gunakan perulangan untuk membagi kembalian sesuai pecahan Gunakan fungsi untuk modularisasi kode (misalnya fungsi hitungKembalian) Alasan Memenuhi Kriteria: Logis: Dapat dikerjakan oleh pemula karena hanya butuh operasi dasar Tidak Kompleks: Tidak butuh struktur data rumit, hanya array dan fungsi Menarik: Simulasi yang bermanfaat di dunia nyata, seperti di kasir atau toko 
[4/5 16.11] fahri: jadi ini kan program tentang hitung kembalian ya, semisal inputnya: Total Harga Barang: 10.000 Uang yang Dibayar: 50.000 jadi outputnya tuh: Total Kembalian: 40.000 Pecahannya: 2 lembar 20.000 
[4/5 16.11] Kang Arifal (KWU): betulll intinya begitu




## Penjelasan Program
- Bahasa pemrograman yang digunakan : C
- Fitur Utama :
Program ini berfungsi untuk menghitung kembalian, yang akan menampilkan total kembalian hingga lembar pecahan uang apa yang dibutuhkan user.
Cara menggunakan program ini, user akan diminta untuk memasukan total harga yang dibutuhkan, dengan ketentuan harga yang dimasukan harus diatas 0, jika user memasukan harga dibawah atau sama dengan 0 maka program akan memberitahu user bahwa harga yang diberikan tidak valid dan meminta user memasukan total harga kembali hingga jumlahnya valid.
Berikutnya, user juga akan diminta untuk memasukan uang yang akan dibayar, dengan ketentuan uang yang dibayar jumlahnya harus lebih dari total harga yang telah dimasukan, jika user memasukan nominal uang yang kurang dari total harga maka program akan memberitahu bahwa uang yang diberikan oleh user kurang dan meminta user memasukan uang diberikan kembali hingga jumlahnya valid.
Terakhir, setelah keduanya telah valid, maka program akan memberikan total harga dengan cara mengurangi total harga dengan uang yang diberikan user, dan juga menampilkan lembar pecahan uang apa saja yang dibutuhkan user untuk mendapatkan total kembalian tersebut.
- Konsep Dasar
Input (scanf) : user diminta untuk memasukan total harga dan user diminta untuk memasukan jumlah uang yang diberikan 
Output (printf)  : program menampilkan perintah untuk memasukan total harga, menampilkan pemberitahuan total harga yang tidak valid, menampilkan perintah uang yang diberikan, menampilkan pemberitahuan uang yang kurang, menampilkan total kembalian beserta lembar pecahan yang dibutuhkan
Variabel : variabel yang dideklrasikan pada program ini menggunakan tipe data integer, diantaranya adalah totalHarga, uangKamu, uangKembalian, kembalianUang, pecahanUang, dan jumlahPecahan.
If-else : berfungsi agar program dapat memberikan keputusan dari hasil total harga yang dimasukan user apakah dibawah 0 atau tidak dan berfungsi agar program dapat memberikan keputusan dari hasil uang yang diberikan user apakah kurang dari total harga atau tidak
Fungsi : pada program ini menggunakan fungsi hitungKembalian yang dideklrasikan sebelum int main(), fungsi tersebut digunakan untuk menghitung kembalian dengan cara membagi total kembalian dengan 8 lembar pecahan uang yang ditentukan.
Array : pada program ini array dideklarasikan pada pecahanUang yang menyimpan 8 jumlah nominal uang. Jadi, saat menghitung lembar pecahan uang yang dibutuhkan dapat menggunakan  array pecahanUang.

## Link Vidio Demo Program di Youtube
https://youtu.be/8E3EJKzl4YE?si=LRCyd3-r_ZJC8uLM
