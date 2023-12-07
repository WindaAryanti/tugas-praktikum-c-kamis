#include <stdio.h>

int main() {
    int A[11] = {12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19};
    int i,N;

    printf("Masukkan bilangan integer = ");
    scanf("%i",&N);

    int ada = 0; // menandai apakah ada bilangan yang sama
    printf("%d ", N);

    for (int i = 0; i < 11; ++i) {
        if (A[i] == N) {
            printf("ADA\nLokasi bilangan yang sama:\n");
            ada = 1;
            break;
        }
    }

    if (!ada) {
        printf("TIDAK ADA\n");
        return 0;
    }

    for (int i = 0; i < 11; ++i) {
        if (A[i] == N) {
            printf("%d ", i);
        }
    }

    return 0;
}
