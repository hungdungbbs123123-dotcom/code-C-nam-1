#include<stdio.h>

int main(){
    int a;
    do {
    printf("nhap so nguyen a:");
    scanf("%d", &a);

    if (a<0){
        printf("nhap lai so nguyen a:");
    }
    }while (a<0);
    printf(" a: %d", a);
    return 0;   
}