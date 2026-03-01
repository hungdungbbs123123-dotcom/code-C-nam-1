#include<stdio.h>

long long tohop(int a){
    int i;
    long long tohop =1;
    for (i=1; i<=a; i++){
        tohop*=i;
    }return tohop;
}
double m, n;
int main (){
    printf("nhap m va n:");
    scanf("%lf %lf", &n, &m);

    int ketqua1 = tohop(n);
    int ketqua2 = tohop(m);
    int ketqua3 = tohop (n-m);

    double ketqua0 = ketqua1/(ketqua2*ketqua3);
    printf("%lf", ketqua0);

    return 0;


}


