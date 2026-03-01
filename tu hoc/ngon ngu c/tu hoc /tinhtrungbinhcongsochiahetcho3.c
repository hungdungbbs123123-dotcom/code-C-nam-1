#include<stdio.h>

int main (){
    printf("tinh trung binh cong so chia het 3<1000\n");

    int i=0;
    int sum=0;
    int count = 0;
    float tbc;
    while(i<1000){
        if(i%3==0){
            printf("%d\n", i);
            sum+=i;
            count++;
        }
        i++;
    }
    printf("tong = %d\n", sum);
    printf("count = %d\n", count);
    tbc = (float)sum / (float)count;
    printf("gia tri trung binh = %f\n", tbc);

    return 0;
}