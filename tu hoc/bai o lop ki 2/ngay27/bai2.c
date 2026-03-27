#include <stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    int masp;
    char tensp[100];
    double gia;

} sanpham;

int main() {
   sanpham sp[2];
   int i;
   for (i = 0; i < 2; i++) {
    printf("Nhap san pham %d\n", i + 1);
    printf("Ma san pham: ");
    scanf("%d", &sp[i].masp);
    printf("Ten san pham: ");
    scanf(" %[^\n]", sp[i].tensp); 
    printf("Nhap gia: ");
    scanf("%lf", &sp[i].gia);
   }
   FILE*a;
   a=fopen("product.dat", "wb");
   if (a==NULL){
    printf("ko co file");
    return 1;
   }
   fwrite(sp, sizeof(sanpham), 2, a);
   fclose(a);
   
   FILE*b;
   b=fopen("product.dat", "rb");
   if (b==NULL){
    printf("ko co file");
    return 1;
   }
   sanpham spb;
   while (fread(&spb, sizeof(sanpham), 1, b)==1){
    printf("%d - %s - %.2lf\n", spb.masp, spb.tensp, spb.gia);
   }
   fclose(b);


    return 0;
}
