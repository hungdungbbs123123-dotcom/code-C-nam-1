#include<stdio.h>
#include<math.h>


int main(){
    int i, n;
    double a;
    float Tong = 0;
    printf("nhap so n:");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%lf", &a);
        Tong = Tong + a*a;
    }
    float S = sum(Tong);

    printf("");
}   