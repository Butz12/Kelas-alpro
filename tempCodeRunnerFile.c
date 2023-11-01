#include <stdio.h>
int i,j,m,n,determinan,A[50][50];

int main() {
    printf("Jumlah Baris = ");
    scanf("%d",&m);
    printf("Jumlah Kolom = ");
    scanf("%d",&n);
    printf("Matriks 1 \n");
    for (i=0; i<=m-1;i++) {
        for (j=0; j<=n-1;j++) {
            printf("Isi baris %d, kolom %d=",i+1,j+1);
            scanf("%d",&A[i][j]);
        }
    }
    determinan = (A[0][0]*A[1][1]*A[2][2]) + (A[0][1]*A[1][2]*A[2][0]) + (A[0][2]*A[1][0]*A[2][1]);
    determinan = determinan - (A[0][2]*A[1][1]*A[2][0]) - (A[0][0]*A[1][2]*A[2][1]) - (A[0][1]*A[1][0]*A[2][2]);
    determinan = determinan - A[3][3];
    printf("Determinan : %d",determinan);
return 0;
}