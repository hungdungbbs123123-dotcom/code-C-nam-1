#include<stdio.h>

int main(){
    int m;
    int n;
    int i;
    double x[1000];

    printf("nhap gia tri m va n:");
    scanf("%d %d", &m, &n);

    for(i=0; i<n; i++){
        printf("nhap  x[%d]:", i+1);
        scanf("%lf", &x[i]);
    }  
    printf("\ndayso");
    for (i=0; i<n; i++){
        printf("%.2lf", x[i]);
        if((i+1)%m == 0){
            printf("\n");
        }
    }
    if ((n%m!=0)){
        printf("\n");
    }
    return 0;
}