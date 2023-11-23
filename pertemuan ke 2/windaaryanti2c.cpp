#include <stdio.h>
#include <math.h>

int main() {
    // Deklarasi variabel
    float alas, tinggi, sisi_miring;

    // Assign nilai panjang alas dan tinggi
    alas = 4.0;
    tinggi = 5.0;

    // Menghitung sisi miring menggunakan rumus Pythagoras
    sisi_miring = sqrt(pow(alas, 2) + pow(tinggi, 2));

    // Menampilkan hasil
    printf("Panjang sisi miring segitiga siku-siku dengan alas %.2f cm dan tinggi %.2f cm adalah %.2f cm\n", alas, tinggi, sisi_miring);

    return 0;
}
