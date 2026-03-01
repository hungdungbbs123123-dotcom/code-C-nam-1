#include <stdio.h>

int main() {
    int a, b ,c;
    printf("Nhap chieu cao tam giac: ");
    scanf("%d", &a);

    for (b = 1; b <= a; b++) {
        for (int c = b; c <= a; c++) {
            printf("  "); 
        }
        for (c = 1; c <= 2 * b - 1; c++) {
            if (c == 1 || c == 2 * b - 1 || b == a)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}
