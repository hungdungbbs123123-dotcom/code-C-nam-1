#include <stdio.h>

int main() {
    int a;
    int x[100][100];
    int i, j;

    printf("Nhap kich thuoc ma tran: ");
    scanf("%d", &a);

    printf("\nma tran:\n");
    for (i = 0; i < a; i++) {
        for (j = 0; j < a; j++) {
            scanf("%d", &x[i][j]);
        }
    }

    printf("\nMa tran:\n");
    for (i = 0; i < a; i++) {
        for (j = 0; j < a; j++) {
            printf("%5d", x[i][j]);
        }
        printf("\n");
    }

    int tong = 0;
    for (i = 0; i < a; i++) {
        for (j = i + 1; j < a; j++) { 
            if (x[i][j] % 3 == 0 || x[i][j] % 4 == 0) {
                tong += x[i][j];
            }
        }
    }

    printf("\nTong cac phan tu tren duong cheo chinh chia het cho 3 hoac 4 = %d\n", tong);

    return 0;
}