#include<stdio.h>

int main(){
    int a, b, c;
    printf("nhap chieu cao tam giac:");
    scanf("%d", &a);

    if(a<=0){
        printf("chieu cao khong hop le");
        return 0;
    }
    for( b=1; b<=a; b++){
        for( c=b; c<=a; c++){
        }
        for( c=1; c<=b; c++){
            putchar ('* ');
        }
        putchar('\n');
    }
    return 0;
}