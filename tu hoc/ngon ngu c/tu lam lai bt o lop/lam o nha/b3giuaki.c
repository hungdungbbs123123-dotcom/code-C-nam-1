#include<stdio.h>
#include<math.h>

int main(){
    int n;
    double x[100];
    printf("nhap n: ");
    scanf("%d", &n);

    for (int i=0; i<n; i++){
        scanf("%lf", &x[i]);
        printf("X%.1lf", x[i]);
    }
    
    double T, S;
    for (int i=0; i<n; i++){
    T = (x[i]+2*i+1)/(2*i+7);
    }
    S=sqrt(2021+T);
    printf("\nS = %lf", S);


    return 0;
}