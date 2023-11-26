#include <stdio.h>

int main() {
    int jam_masuk, jam_keluar, lama_parkir, biaya;

    printf("Jam masuk: ");
    scanf("%d", &jam_masuk);
    printf("Jam keluar: ");
    scanf("%d", &jam_keluar);

    if (jam_keluar >= jam_masuk) {
        lama_parkir = jam_keluar - jam_masuk;
    } else {
        lama_parkir = (12 - jam_masuk) + jam_keluar;
    }

    if (lama_parkir <= 2) {
        biaya = 2000;
    } else {
        biaya = 2000 + (lama_parkir - 2) * 500;
    }

    printf("Biaya: %d\n", biaya);

    return 0;
}
