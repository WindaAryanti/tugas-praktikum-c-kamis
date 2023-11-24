#include <stdio.h>
#include <math.h>

int main() {
    float alas, tinggi, sisi_miring;

    // Input sisi alas dan sisi tinggi segitiga
    printf("Masukkan panjang sisi alas segitiga (cm): ");
    scanf("%f", &alas);
    printf("Masukkan panjang sisi tinggi segitiga (cm): ");
    scanf("%f", &tinggi);

    // Menghitung sisi miring segitiga menggunakan rumus Pythagoras
    sisi_miring = sqrt(pow(alas, 2) + pow(tinggi, 2));

    // Menampilkan sisi miring segitiga
    printf("Panjang sisi miring segitiga: %.2f cm\n", sisi_miring);

    return 0;
}
