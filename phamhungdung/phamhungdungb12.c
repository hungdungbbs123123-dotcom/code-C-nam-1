#include<stdio.h>
#include<math.h>

int main(){
    int n=0;
    double x, a, b;

    printf(" nhap x:");
    scanf("%lf", &x);

    a=x;
    b=0;
    while (fabs(a)>=0.00001){
        b+=a;
        n++;
        a=a*(-x*x)/((2*n)*(2*n+1));
    }
    printf("\nsin(%.5f)=%.5f", x, b);
    printf("\ngia tri cua sin(x):%.5f", sin(x));
    return 0;
}