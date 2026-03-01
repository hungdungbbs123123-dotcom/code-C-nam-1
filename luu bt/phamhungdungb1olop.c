#include<stdio.h>
#include<math.h>

 int main(){
    int n, i;
    float a[100], x0, P1, P2;
    float tong=0;
    printf("nhap bac cua da thuc:");
    scanf("%d", &n);
    
    for(i=0; i<=n; i++){
        printf("nhap a[%d]:", i);
        scanf("%f", &a[i]);
    }
    puts("cac he so cua da thuc;");
    for(i=0; i<=n; i++){
        printf("%7.1f", a[i]);
    }
    printf("\nnhap x0:");
    scanf("%f", &x0);
    P1 =0;
    for(i=0; i<=n; i++){
        P1+= a[i]*pow(x0,i);
    }
    P2 = 0;
    for(i=1; i<=n; i++){
        P2+=i*a[i]*pow(x0, i-1);
    }
    printf("\nP1(%.2f)=%.2f",x0 ,P1);
    printf("\nP2(%.2f)=%.2f", x0, P2);
    
    for(i=0; i<=n; i++){
        if(a[i]<0){
            printf("\nhe so am: %.3f", a[i]);
            tong+=a[i];
        }
        else{
            printf("\nhe so duong:%.3f", a[i]);
        }
    }
    printf("\ntong cac he so am:%.3f", tong);
    return 0;

 }