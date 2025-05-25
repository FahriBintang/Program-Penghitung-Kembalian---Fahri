#include <stdio.h>

// Deklrarasi variabel yang dibutuhkan
int totalHarga, uangKamu; 
int uangKembalian, kembalianUang; 

// Membuat fungsi untuk menghitung kembalian
void hitungKembalian () 
    {
        // Memasukan pecahan uang kedalam Array, untuk proses menghitung total pecahan uang pada kembalian
        int pecahanUang[] = {100000, 50000, 20000, 10000, 5000, 2000, 1000, 1}; 
        int jumlahPecahan[8]; 

        // Menghitung total kembalian
        uangKembalian = uangKamu - totalHarga;

        // Menyimpan hasil kembalian asli
        kembalianUang = uangKembalian;

        // Membuat perulang yang berfungsi untuk menghitung pecahan kembalian
        for (int i = 0 ; i < 8; i++) 
        {
            jumlahPecahan[i] = kembalianUang / pecahanUang[i]; 
            kembalianUang %= pecahanUang[i]; 
        }
      
        // Menampilkan hasil total kembalian dan pecahan tiap uangnya
        printf("\nTotal Kembalian: %d Rupiah\n", uangKembalian); 
        printf("%d Lembar Seratus Ribu\n%d Lembar Lima Puluh Ribu\n%d Lembar Dua Puluh Ribu\n%d Lembar Sepuluh Ribu\n%d Lembar Lima Ribu\n%d Lembar Dua Ribu\n%d Lembar Seribu\n%d Perak", jumlahPecahan[0], jumlahPecahan[1], jumlahPecahan[2], jumlahPecahan[3], jumlahPecahan[4], jumlahPecahan[5], jumlahPecahan[6], jumlahPecahan[7]); //Ouput
    }

int main() {

    // Membuat perulangan agar user memasukan total harga yang valid yaitu diatas 0
    while (totalHarga <= 0) 
    {
        printf("Masukan Total Harga: ");
        scanf("%d", &totalHarga); 
        if (totalHarga <= 0) 
        {
            printf("Harga Tidak Valid\n"); //Output
        }
        else 
        {
            // Membuat perulangan agar user memasukan uang yang akan dibayar lebih dari total harga 
            while (uangKamu < totalHarga) //Looping While
            {
            printf("Masukan Uang yang Dibayar: ");
            scanf("%d", &uangKamu); //Input
            if (uangKamu < totalHarga)
            {
            printf("Uang Kamu Kurang\n"); //Output
            }
            else
            {
            // Menggunakan fungsi hitungKembalian yang sudah dibuat sebelum int main()
            hitungKembalian();
            }
            }
        }
    }
    return 0;
}