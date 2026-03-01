#include<stdio.h>

int n;
double a[100];
int i;
double d;
int main (){
    printf("nhap he so n:");
    scanf("%d", &n);

    for (i=0; i<=n; i++){
        printf("nhap a[%d]:", i);
        scanf("%lf",&a[i]);
    }
    printf("nhap he so d:");
    scanf("%lf", &d);
    
   double T=a[n];
    for (i=n-1; i>=0; i--){
        T=T*d+a[i];
    }
    printf("P(%.2lf)= %.6lf\n", d, T);
    return 0 ;
}
