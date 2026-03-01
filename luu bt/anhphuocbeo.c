#include<stdio.h>
#include<math.h>
int main()
{

    int choice;
    float area;
    const double Pi = 3.142332;
do {
        printf(" Chuong trinh tinh dien tich \n");
        printf("1. hinh tron\n");
        printf("2. hinh vuong\n");
        printf("3. hinh chu nhat\n");
        printf("4. hinh tam giac\n");
        printf("ban muon tinh dien tich hinh nao (1-4)");
        scanf("%d", &choice);
} while (choice <1 || choice >4);

if (choice ==1) {
    float bankinh;
    printf("ban kinh hinh tron: ");
    scanf("%f", &bankinh);
    area = Pi * bankinh * bankinh;
    printf("Diện tích hình tròn: %.2f\n", area );
}

else if (choice ==2) {
    float canhvuong;
    printf("canh vuong:");
    scanf("%f", &canhvuong);
    area = canhvuong * canhvuong;
    printf("Diện tích hình vuông: %.2f\n", area);
}

else if ( choice ==3) {
    float dai, rong;
    printf("canh dai: ");
    scanf("%f", &dai);
    printf("canh rong: ");
    scanf("%f", &rong);
    area = dai * rong;
    printf("Diện tích hình chữ nhật: %.2f\n", area);
}

else if ( choice ==4) {
    float day, cao;
    printf("day: ");
    scanf("%f", &day);
    printf("cao: 4");
    scanf("%f", &cao);
    area = 0.5 * day * cao;
    printf (" Diện tích hình tam giác: %.2f\n", area);
}
return 0;
}





    









