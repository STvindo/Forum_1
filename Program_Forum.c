#include <stdio.h>

int main()
{
    char Nama_Mahasiswa[100][50]; // Array untuk menyimpan 100 nama mahasiswa
    int hasil[100];               // Array untuk menyimpan hasil
    int Mahasiswa, Lulus = 0, Gagal = 0;

    printf("\nProgram Menghitung Kelulusan Nilai Mahasiswa\n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n\n");

    // Input Jumlah Mahasiswa yang akan dihitung
    printf("Masukkan Total Keseluruhan Mahasiswa : ");
    scanf("%d", &Mahasiswa);

    // Input Informasi mahasiswa dan hasil ujiannya
    for (int i = 0; i < Mahasiswa; i++)
    {
        // Input Nama Mahasiswa
        printf("Nama Mahasiswa : ");
        scanf("%s", Nama_Mahasiswa[i]);

        // Input Hasil Ujian Mahasiswa
        printf("Masukkan hasil (1 = lulus, 2 = gagal) untuk %s: ", Nama_Mahasiswa[i]);
        scanf("%d", &hasil[i]);

        // Mendata Jumlah Hasil Ujian
        if (hasil[i] == 1)
        {
            Lulus++;
        }
        else if (hasil[i] == 2)
        {
            Gagal++;
        }
        else
        {
            printf("Input tidak valid. Masukkan hanya angka 1 atau 2.\n\n");
            i--; // Jika input tidak valid, ulang input untuk mahasiswa ini.
        }
    }

    printf("\nHasil Ujian Mahasiswa:\n");
    // Menampilkan hasil ujian setiap mahasiswa
    for (int i = 0; i < Mahasiswa; i++)
    {
        printf("%s : ", Nama_Mahasiswa[i]);
        if (hasil[i] == 1)
        {
            printf("Lulus\n");
        }
        else if (hasil[i] == 2)
        {
            printf("Gagal\n");
        }
    }

    // Menghitung persentase kelulusan
    float Persentase = ((float)Lulus / Mahasiswa) * 100;

    // Menampilkan Jumlah Kelulusan
    printf("\nJumlah yang Lulus: %d\n", Lulus);
    printf("Jumlah yang Gagal: %d\n", Gagal);

    // Menampilkan pesan berdasarkan persentase kelulusan
    if (Persentase > 80)
    {
        printf("Kelulusan Kelas Telah Mencapai Target!\n");
    }
    else
    {
        printf("Kelulusan Kelas Belum Mencapai Target.\n");
    }

    return 0;
}
