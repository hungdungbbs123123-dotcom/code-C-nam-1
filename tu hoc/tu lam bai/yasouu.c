#include <stdio.h>
#include<stdlib.h>

int main() {
    int x;
    int y;
    printf("nhap x y:" );
    scanf("%d%d", &x,&y);
    
    int capdonggioi, capdidoi;

    if (x<y){
        capdidoi = x;
    }else{
        capdidoi = y;
    }

    capdonggioi = abs(x-y)/2;

    printf("cap di gioi = %d\n", capdidoi);
    printf("cap dong gioi = %d", capdonggioi);




    return 0;
}
