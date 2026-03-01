#include<stdio.h>

int main(){
    int n, i;
    float x[100], y[100];
    int point;

    printf("nhap so diem n: ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("nhap toa do diem thu %d:", i+1);
        scanf("%f%f", &x[i], &y[i]);
    }

    printf("\ntoa do x, y la: ");
    for(i=0; i<n; i++){
        printf("(%.1f, %.1f)", x[i], y[i]);
    }
    for(i=0; i<n; i++){
        if(x[i]*x[i]+y[i]*y[i]<=25){
            point++;
        }
    }
    printf("so diem nam trong duong tron : %d", point);
    return 0;
}