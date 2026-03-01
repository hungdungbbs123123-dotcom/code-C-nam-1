#include<stdio.h>


typedef struct {
    double x; 
    double y;
}diem;

int main(){
    int i;
    diem a[100];
    int n;
    int bentrong =0;
    int benngoai =0;
    int sodoan;
    
    printf("nhap n diem:");
    scanf("%d", &n);
    
    for(i=0; i<n; i++){
        printf("nhap toa do dg tron:");
        scanf("%lf %lf", &a[i].x, &a[i].y);
    }
     for(i=0; i<n; i++){
        double T=a[i].x*a[i].x+a[i].y*a[i].y;
        if (T<=25)
            bentrong++;
        else 
            benngoai++;
     }
    if(bentrong>=2){
        sodoan=bentrong*(bentrong-1)/2;
    }
    
    printf("so diem nam ben trong dg tron: %d\n" ,bentrong);
    printf("do diem nam ben ngoai dg tron: %d\n", benngoai);
    printf("so doan thang nam ben trong dg tron: %d\n", sodoan);

    return 0;
}



