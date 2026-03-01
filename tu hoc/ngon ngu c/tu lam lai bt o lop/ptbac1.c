#include<stdio.h>

int main (){
    float b =2;
    float c =6;
    printf("nhap b va c:");
    scanf("%f %f", &b, &c);
    float x = -c/b;
    printf("nghiem :%f", x);
    return 0;
}