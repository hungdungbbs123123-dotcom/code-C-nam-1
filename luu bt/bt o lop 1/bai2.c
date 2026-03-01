#include<stdio.h>

int main() {
    int n, i;
    int a[100];

    printf("nhap so phan tu n:");
    scanf("%d", &n);

    for (i=0; i<=n; i++){
        printf("phan tu thu %d:", i);
        scanf("%d", &a[i]);
    }
    printf("\ndanh sach cac phan tu:");
    for(i=0; i<=n; i++){
        printf("%5d", a[i]);
    }
    return 0;

}
