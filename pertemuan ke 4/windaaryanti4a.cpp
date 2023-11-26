#include <stdio.h>

int main() {
    int bilangan;

    printf("Masukkan sebuah bilangan bulat positif: ");
    scanf("%d", &bilangan);

    if (bilangan % 2 == 0) {
        printf("%d adalah bilangan GENAP\n", bilangan);
    } else {
        printf("%d adalah bilangan GANJIL\n", bilangan);
    }

    return 0;
}
