#include <stdio.h>
#include <unistd.h>

// Array berisi level kekeruhan air
int kekeruhanAir[] = {6, 8, 12, 18, 24, 30, 36, 42, 49};

// Fungsi untuk menghitung waktu dan kecepatan motor berdasarkan level kekeruhan air
void prosesCucian(int level) {
    int kecepatanMotor, waktuCuci;

    // Menentukan kecepatan dan waktu berdasarkan level kekeruhan air
    if (level == 6 || level == 8 || level == 12)
    {
        kecepatanMotor = 800;
        waktuCuci = 45;
    }
    else if (level == 18 || level == 24 || level == 30)
    {
        kecepatanMotor = 1000;
        waktuCuci = 60;
    }
    else
    {
        kecepatanMotor = 1200;
        waktuCuci = 75;
    }

    // Menampilkan informasi ke pengguna
    printf("Mencuci dengan kecepatan %d rpm selama %d menit.\n", kecepatanMotor, waktuCuci);

    // Menunggu proses pencucian selesai
    sleep(waktuCuci);

    // Memutar motor pembuka klep pembuangan air
    printf("Membuang air kotor.\n");
    sleep(2); // Jeda 2 menit untuk membuang air kotor

    // Menampilkan informasi ke pengguna
    printf("Mengeringkan cucian dengan kecepatan 1000 rpm selama 3 menit.\n");

    // Menunggu proses pengeringan selesai
    sleep(3);
}

int main() {
    // Menampilkan pesan saat tombol Start ditekan
    printf("Tombol Start ditekan. Memulai proses pencucian...\n");

    // Mengaktifkan motor pembuka klep pengisian air selama 2 menit
    printf("Membuka klep pengisian air.\n");
    sleep(2);

    // Melakukan pencucian untuk setiap level kekeruhan air
    for (int i = 0; i < sizeof(kekeruhanAir) / sizeof(kekeruhanAir[0]); i++) {
        prosesCucian(kekeruhanAir[i]);
    }

    // Menampilkan pesan saat proses pencucian selesai
    printf("Proses pencucian selesai. Mesin cuci siap digunakan.\n");

    return 0;
}

