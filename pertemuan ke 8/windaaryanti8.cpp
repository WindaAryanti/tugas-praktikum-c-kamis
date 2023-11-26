#include <stdio.h>

int main() {
    int A[11];
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35, 28, 14, 11, 999};
    int index = 0;

    for (int i = 0; i < sizeof(data) / sizeof(data[0]); i++) {
        if (data[i] != 999) {
            A[index] = data[i];
            index++;
        } else {
            break;
        }
    }

    printf("A: ");
    for (int i = 0; i < index; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
