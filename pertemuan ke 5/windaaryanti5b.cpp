#include <stdio.h>

int main() {
    int kode;
    char jenis;
    float harga, diskon, harga_setelah_diskon;

    printf("Kode: ");
    scanf("%d", &kode);
    printf("Jenis: ");
    scanf(" %c", &jenis);
    printf("Harga: ");
    scanf("%f", &harga);

    switch (jenis) {
        case 'A':
            diskon = 0.1;
            break;
        case 'B':
            diskon = 0.15;
            break;
        case 'C':
            diskon = 0.2;
            break;
        default:
            printf("Jenis barang tidak valid\n");
            return 0;
    }

    harga_setelah_diskon = harga - (harga * diskon);
    printf("Jenis barang %c mendapat diskon = %.0f%%, Harga setelah didiskon = %.0f\n", jenis, diskon * 100, harga_setelah_diskon);

    return 0;
}
