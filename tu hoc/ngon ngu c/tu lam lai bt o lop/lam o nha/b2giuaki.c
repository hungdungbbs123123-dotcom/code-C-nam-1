#include<stdio.h>
#include<math.h>

int n;
double a[100];

double P(double x){
    double s=0;
    for(int i =0; i<=n; i++){
        s += a[i]*pow (x, i);

    }
return s;
}

double Pphay(double x){
    double s=0;
    for (int i=1; i<=n; i++){
        s +=i*a[i] * pow (x,i-1);

    }
return s;
}

int main (){
    printf("nhap he phuong trinh: ");
    scanf("%d", &n);

    for (int i=0; i<=n; i++){
        scanf("%lf", &a[i]);
    }

    double t;
    printf("nhap t: ");
    scanf("%lf", &t);
    printf("ket qua la = %lf", P(t)-P(-t));

    double z;
    printf("nhap z: ");
    scanf("%lf", &z);
    if(Pphay(z) == 0 ){
        printf("thoa ma");

    }else{
        printf("ko thoa man");
    }
    
return 0;
    
}

