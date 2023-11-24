#include <stdio.h>
#include <math.h>

int main() {
    float alas, tinggi, luas, keliling, sisi_miring;

    // Input panjang alas dan tinggi segitiga
    printf("Masukkan panjang alas segitiga (cm): ");
    scanf("%f", &alas);
    printf("Masukkan tinggi segitiga (cm): ");
    scanf("%f", &tinggi);

    // Menghitung luas segitiga
    luas = 0.5 * alas * tinggi;

    // Menghitung sisi miring segitiga
    sisi_miring = sqrt(pow(alas/2, 2) + pow(tinggi, 2));

    // Menghitung keliling segitiga
    keliling = alas + (2 * sisi_miring);

    // Menampilkan luas dan keliling segitiga
    printf("Luas segitiga: %.2f cm^2\n", luas);
    printf("Keliling segitiga: %.2f cm\n", keliling);

    return 0;
}
