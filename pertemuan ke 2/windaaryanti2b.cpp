#include <stdio.h>
#include <math.h>

int main() {
    // Deklarasi variabel
    float diameter, jari_jari, volume;

    // Assign nilai diameter
    diameter = 15.0;

    // Menghitung jari-jari
    jari_jari = diameter / 2.0;

    // Menghitung volume bola
    volume = (4.0 / 3.0) * M_PI * pow(jari_jari, 3);

    // Menampilkan hasil
    printf("Volume bola dengan diameter %.2f cm adalah %.2f cm^3\n", diameter, volume);

    return 0;
}
