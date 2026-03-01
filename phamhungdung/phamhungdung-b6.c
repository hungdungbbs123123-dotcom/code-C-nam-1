#include<stdio.h>

int main(){
    int a, b, c, d;
    printf("nhap ngay:");
    scanf("%d", &a);
    printf("nhap thang:");
    scanf("%d", &b);
    printf("nhap nam:");
    scanf("%d", &c); 

    switch (b){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            d=31;
            break;
        
        case 4: 
        case 6:
        case 9:
        case 11:
            d=30;
            break;
        if (c%4==0 && c%100!=0 || c%400==0){
            case 2:
                d+=29; 
                break;
        } else {
                d+=28;
                break;
        }
    }
    d+=a;

    printf("ngay %d |%d |%d la ngay thu %d trong nam", a, b, c, d);       
    return 0;
}