#include<stdio.h>
#include<math.h>


struct Dathuc{
    int bac;
    float heso[100];
};
int main (){
    struct Dathuc P, Pdh;
    int i;
    float x;
    float ketqua=0;

    printf("nhap bac cua da thuc: ");
    scanf("%d", &P.bac);

    printf("nhap he so: ");
    for (i=0; i<=P.bac; i++){
        printf("he so a[%d]", i);
        scanf("%f", P.heso[i]);
    }
    printf("nhap he so x: ");
    scanf("%f", &x);

    for(i=0; i<=P.bac; i++){
        ketqua = P.heso[i]+pow(x, i);
    }
    printf("\ngia tri cua P(%f)= %.3f", x, ketqua);

    if(P.bac ==0)
        printf("")
    

}