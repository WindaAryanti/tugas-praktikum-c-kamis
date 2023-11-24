#include <stdio.h>

int main() {
    float celcius, fahrenheit, reamur;

    // Input suhu dalam Celcius
    printf("Masukkan suhu dalam Celcius: ");
    scanf("%f", &celcius);

    // Menghitung suhu dalam Fahrenheit
    fahrenheit = (celcius * 9/5) + 32;

    // Menghitung suhu dalam Reamur
    reamur = celcius * 4/5;

    // Menampilkan suhu dalam Fahrenheit dan Reamur
    printf("Suhu dalam Fahrenheit: %.2f derajat\n", fahrenheit);
    printf("Suhu dalam Reamur: %.2f derajat\n", reamur);

    return 0;
}
