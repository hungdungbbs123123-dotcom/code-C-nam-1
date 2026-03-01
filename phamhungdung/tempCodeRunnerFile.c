#include<stdio.h>

int main(){
    int a, b, c, d;
    printf("nhap chieu cao tam giac:");
    scanf("%d", &a);

    if(a<=0){
        printf("chieu cao khong hop le");
        return 0;
    }
    for( b=1; b<=a; b++){
        for( c=1; c<=a-b; c++){
            putchar(' ');
        }
        for( d=1; d<=2*b-1; d++){
            putchar ('*');
        }
        putchar('\n');
    }
    return 0;
}