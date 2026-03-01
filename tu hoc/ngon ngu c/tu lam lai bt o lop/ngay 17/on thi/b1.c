#include<stdio.h>


    long long tohop (int a) {
        int i; 
        long long  tohop=1;
        for(i=1; i<=a; i++){
            tohop*=i;
        }
        return tohop;   
    }
    int main(){
    int n, m;
    printf("nhap he so m,n:");
    scanf("%d %d", &n, &m);
    
    long long ketqua1 =tohop (n);
    long long ketqua2 =tohop (m);
    long long ketqua3 =tohop ((n-m));

    double ketqua0=ketqua1/(ketqua2*ketqua3);
    printf("%.2lf", ketqua0);
    return 0;
    }
    

