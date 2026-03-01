#include<stdio.h>
#include<math.h>

double tinhS(int n){
    long a, tong = 0; 
    for(int i=0; i<n; i++){
        printf("nhap a%d: ", i+1);
        scanf("%ld", &a);
        tong += a*a;
    }
    return sqrt(tong);
}

int main (){
    int n;
    double S;
    printf("nhap n: ");
    scanf("%d", &n);

    S=tinhS(n);

    printf("S = %lf", S);

    return 0;

}