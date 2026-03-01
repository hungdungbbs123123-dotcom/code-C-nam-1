#include<stdio.h>
int main(){
    int a,b;
    int tong, hieu, tich, thuong;
    printf("nhap so a: ");
    scanf("%d", &a);
    printf("nhap so b: ");
    scanf("%d", &b);

    tong = a+b;
    hieu = a-b;
    tich = a*b;
    thuong = a/b;

    printf("tong: %d\n", tong);
    printf("hieu: %d\n", hieu);
    printf("tich: %d\n", tich);
    printf("thuong: %d\n", thuong);
    return 0;
}