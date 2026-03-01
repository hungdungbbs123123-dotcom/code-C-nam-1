#include<stdio.h>
#include<math.h>

int main (){
    double x[100], y[100];
    int i;
    float X,n;
    printf("nhap toa do x y:");
    
    
    float Y=y[i];
    for (i=0; i<n; i++){
        scanf(" %lf %lf", &x[i], &y[i]);
        if (fabs(y[i]>Y)){
            Y=y[i];
            X=x[i];
        }
    }

printf("X: %f", X);
printf("Y: %f", Y);
}
