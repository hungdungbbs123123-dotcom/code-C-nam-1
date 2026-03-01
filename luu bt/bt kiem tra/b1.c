#include<stdio.h>

int main (){
    int max, i, n;
    int a[100];
    int tong;

    printf("nhap so phan tu n: ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("a[%d]", i);
        scanf("%d", &a[i]);
    }

    printf("\nday so:");
    for(i=0; i<n; i++){
        printf("%d", a[i]);
    }

    max=a[0]+a[1];
    for(i=0; i<n-1; i++){
        tong=a[i]+a[i+1];
        if(tong>max){
            max=tong;
        }
    }
    return 0;
}