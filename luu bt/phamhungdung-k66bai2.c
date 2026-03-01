#include<stdio.h>
#include<math.h>

int main() {
    int a, b;
    float x[50];
    float y[50]; 
    float tong=0;

    printf("nhap so diem:");
    scanf("%d", &a);
    
    for ( int b=0; b<a; b++)
    {
        printf("\nnhap toa do diem %d (x):", b+1);
         scanf("%f", &x[b]);
        printf("\nnhap toa do diem %d (y):", b+1);
        scanf("%f", &y[b]);
    }
    for ( b=0; b<a; b++)
    {
        float dx = x[b+1] - x[b];
        float dy = y[b+1] - y[b];
        tong += sqrt(dx*dx + dy*dy);
    }
    printf(" tong do dai duong gap khuc: %.2f", tong);

return 0;
}