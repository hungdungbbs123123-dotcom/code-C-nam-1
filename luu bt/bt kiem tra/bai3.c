#include<stdio.h>
#include<math.h>

int main(){
    int n, i;
    double F =0;
    double x[100];
    int tong;

    printf("nhap so phan tu n: ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("x[%d]", i+1);
        scanf("%lf", &x[i]);
    }
    printf("day so vua nhap: ");
    for(i=0; i<n; i++){
        printf("%.2f", x[i]);
    }
    F=2025+x[0];

    for(i=1; i<n; i++){
        double tong = i+x[i];
        F +=  pow(tong, 3);
    }

    return 0;
}