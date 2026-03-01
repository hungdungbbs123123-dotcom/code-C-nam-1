#include<stdio.h>

int main () {
    int n, a[50];
    int i;
    int tong=0;
    printf("nhap so phan tu: ");
    scanf("%d", &n);

    if(n<=0) {
        printf("phan tu ko hop le\n");
        return 0;   
    }
    printf("nhap cac phan tu: \n");
    for ( int i=0; i<n; i++)
        {
        printf("phan tu thu %d:", i+1);
        scanf("%d", &a[i]);
        
    }  
    for ( int i=0; i<n; i++)
    { if (a[i] %5 ==0 && a[i]%3 !=0)
        tong += a[i];
    }
    printf(" tong cac phan tu chia het cho 5 nhung ko chia het cho 3: %d", tong);

    return 0;
}