#include <stdio.h>

int main() {
    char array[] = {'S', 'T', 'T', 'M', 'A', 'N', 'D', 'A', 'L', 'A'};
    char karakter;
    int count = 0;
    int i;

    printf("Masukkan bilangan integer: ");
    scanf("%c", &karakter);

    for (i = 0; i < sizeof(array); i++) {
        if (array[i] == karakter) {
            count++;
        }
    }

    if (count > 0) {
        printf("ADA\n");
        printf("Jumlah bilangan %c adalah %d\n", karakter, count);
    } else {
        printf("TIDAK ADA\n");
    }

    return 0;
}
