#include <stdio.h>

int main() {
    int A[11];
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35};
    int i, j = 0;

    // Menginput data dan menyimpan nilai genap dalam array A
    for (i = 0; i < 11; i++) {
        if (data[i] % 2 == 0) {
            A[j] = data[i];
            j++;
        }
    }

    // Mencetak isi array A
    printf("Isi array A:");
    for (i = 0; i < j; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
