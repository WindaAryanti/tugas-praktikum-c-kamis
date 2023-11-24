#include <stdio.h>

int main() {
    int bilangan;

    // Input bilangan bulat positif
    printf("Masukkan bilangan bulat positif: ");
    scanf("%d", &bilangan);

    // Menentukan apakah bilangan ganjil atau genap
    if (bilangan % 2 == 0) {
        printf("Bilangan tersebut adalah GENAP\n");
    } else {
        printf("Bilangan tersebut adalah GANJIL\n");
    }

    return 0;
}
