#include<stdio.h>
#include<math.h>

int main () {

    double a;
    printf("nhap so: ");
    if (scanf("%f", &a) != 1) {
    
        return 1;
    }

    if (a <= 0) {
        printf("a phai > 0\n");
        return 0;
    }
    printf("can bac hai: %.2f\n", sqrt(a));
    printf("tri tuyet doi: %.2f\n", fabs(a));
    printf("luy thua: %.2f\n", pow(a,3));
    printf("sin: %.2f\n", sin(a));
    printf("cos: %.2f\n", cos(a));
    printf("logarit: %.2f\n", log(a));
    printf("log10: %.2f\n", log10(a));
    return 0;



}