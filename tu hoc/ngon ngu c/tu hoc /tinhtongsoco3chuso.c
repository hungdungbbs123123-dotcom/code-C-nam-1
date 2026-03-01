#include<stdio.h>

int main (){
    int so = 456;
    int donvi = so%10;
    int chuc = (so/10)%10;
    int tram = so/100; //lay nguyen 
    int T = donvi + chuc + tram ;
    printf("%d", donvi);
    printf("%d", chuc);
    printf("%d", tram);
    
    return 0;
}