#include <stdio.h>

int main() {
    int tugas, quiz, uts, uas;
    float akhir;
    for (int i = 1; i <= 3; i++) {
        printf("\nInput nilai mahasiswa ke-%d\n", i);
        printf("Nilai Tugas: ");
        scanf("%d", &tugas);
        printf("Nilai Quiz: ");
        scanf("%d", &quiz);
        printf("Nilai UTS: ");
        scanf("%d", &uts);
        printf("Nilai UAS: ");
        scanf("%d", &uas);

        akhir = 0.1 * tugas + 0.2 * quiz + 0.3 * uts + 0.4 * uas;

        printf("\nNilai Akhir Mahasiswa ke-%d: %.2f\n", i, akhir);

        if (akhir > 90) {
            printf("Huruf Mutu Mahasiswa ke-%d: A\n", i);
        } else if (akhir > 86 && akhir <= 90) {
            printf("Huruf Mutu Mahasiswa ke-%d: A-\n", i);
        } else if (akhir >= 81 && akhir <= 85) {
            printf("Huruf Mutu Mahasiswa ke-%d: B+\n", i);
        } else if (akhir > 76 && akhir <= 80) {
            printf("Huruf Mutu Mahasiswa ke-%d: B\n", i);
        } else if (akhir >= 71 && akhir <= 75) {
            printf("Huruf Mutu Mahasiswa ke-%d: B-\n", i);
        } else if (akhir >= 66 && akhir <= 70) {
            printf("Huruf Mutu Mahasiswa ke-%d: C+\n", i);
        } else if (akhir >= 61 && akhir <= 65) {
            printf("Huruf Mutu Mahasiswa ke-%d: C\n", i);
        } else if (akhir >= 56 && akhir <= 60) {
            printf("Huruf Mutu Mahasiswa ke-%d: C-\n", i);
        } else if (akhir >= 46 && akhir <= 55) {
            printf("Huruf Mutu Mahasiswa ke-%d: D\n", i);
        } else {
            printf("Huruf Mutu Mahasiswa ke-%d: E\n", i);
        }
    }

    return 0;
}