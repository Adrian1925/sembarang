#include <stdio.h>
#include <string.h>

// Fungsi untuk meng-copy string
void copystr(char *asal, char *tujuan) {
    strcpy(tujuan, asal); // Menggunakan fungsi strcpy() untuk meng-copy string
}

int main() {
    char stringAsal[100]; // Maksimum panjang string asal
    char stringTujuan[100]; // Maksimum panjang string tujuan

    printf("Masukkan string asal: ");
    scanf("%s", stringAsal);

    // Memanggil fungsi copystr() untuk meng-copy string
    copystr(stringAsal, stringTujuan);

    // Menampilkan hasilnya
    printf("String Asal: %s\n", stringAsal);
    printf("String Tujuan: %s\n", stringTujuan);

    return 0;
}
