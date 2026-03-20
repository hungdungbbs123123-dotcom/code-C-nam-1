#include <stdio.h>
typedef struct {
    char masp[50];
    char tensp[50];
    float giasp;
}product;

int main() {
    int n;
    printf("nhap so san pham: ");
    scanf("%d", &n);
    product sp[n];
    
  

    for (int i=0; i<n; i++){
        printf("san pham so [%d]\n", i+1);

        printf("ma san pham: ");
        scanf("%s", &sp[i].masp);
        printf("ten san pham: ");
        scanf("%s", &sp[i].tensp);
        printf("gia san pham: ");
        scanf("%f", &sp[i].giasp);
    }

    for (int i=0; i<n-1; i++){
        for (int j=i+1; j<n; j++){
            if(sp[i].giasp>sp[j].giasp){
                product tmp = sp[i];
                sp[i]=sp[j];
                sp[j]=sp[i];
            }
        }
    }

     printf("\n%s %s %s\n", "Ma SP", "Ten SP", "Gia ban");
    for (int i = 0; i < n; i++) {
        printf("%s %s %.2f\n", sp[i].masp, sp[i].tensp, sp[i].giasp);
    }

    return 0;
}
