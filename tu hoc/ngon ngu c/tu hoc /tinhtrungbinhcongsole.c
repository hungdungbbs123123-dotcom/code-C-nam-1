#include<stdio.h>

int main (){
    int i;
    int sum;
    int dem;
    float tbc;
    for (i=0; i<1000; i++){
        if(i % 2 !=0){
            printf("%d ", i);
            sum =+i;
            dem ++;
        }
    }
    printf(" \ntong = %d\n", sum);
    printf(" dem = %d\n", dem);
    
    tbc = (float)sum/(float)dem;
    printf(" tbc = %f\n", tbc);
}