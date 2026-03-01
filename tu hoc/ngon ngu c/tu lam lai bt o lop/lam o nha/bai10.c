#include<stdio.h>

double amcuoi(int n){
    double a, socuoi = 0;
    int Tong = 0;
    int tongsoam = 0;
    for (int i=0; i<n; i++){
        printf("nhap a%d: ", i+1);
        scanf("%lf", &a);
        if (a<0){
            socuoi=a;
            tongsoam +=a;
            Tong =1;
        }
    }
    if(Tong == 1){
            return socuoi;
        }
        else{
            return 0;
        }
    }       

int main(){
    int n; 
    double socuoi;
    printf("nhap n: ");
    scanf("%d", &n);
    double ketqua = amcuoi(n);
    if (ketqua < 0){
        printf("%lf", ketqua);
        printf("%lf", socuoi);
    }else{
        printf("lam j co so nao");
    }
    return 0;
}