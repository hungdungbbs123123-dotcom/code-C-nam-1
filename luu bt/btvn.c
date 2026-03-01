#include <stdio.h>
#include <math.h>

int main() {
    char hinh;   // Dùng ký tự thay vì số
    float area;

    do {
        printf("=== CHUONG TRINH TINH DIEN TICH ===\n");
        printf("a. Hinh tron\n");
        printf("b. Hinh vuong\n");
        printf("c. Hinh chu nhat\n");
        printf("d. Hinh tam giac\n");
        printf("Nhap lua chon (a-d): ");
        scanf(" %c", &hinh); // có khoảng trắng trước %c để tránh lỗi nhập

        if (hinh == 'a') {
            float r;
            printf("Nhap ban kinh hinh tron: ");
            scanf("%f", &r);
            area = M_PI * r * r;
            printf("Dien tich hinh tron = %.2f\n", area);
            break;
        }
        else if (hinh == 'b') {
            float a;
            printf("Nhap do dai canh hinh vuong: ");
            scanf("%f", &a);
            area = a * a;
            printf("Dien tich hinh vuong = %.2f\n", area);
            break;
        }
        else if (hinh == 'c') {
            float a, b;
            printf("Nhap chieu dai: ");
            scanf("%f", &a);
            printf("Nhap chieu rong: ");
            scanf("%f", &b);
            area = a * b;
            printf("Dien tich hinh chu nhat = %.2f\n", area);
            break;
        }
        else if (hinh == 'd') {
            float base, height;
            printf("Nhap do dai day: ");
            scanf("%f", &base);
            printf("Nhap chieu cao: ");
            scanf("%f", &height);
            area = 0.5 * base * height;
            printf("Dien tich hinh tam giac = %.2f\n", area);
            break;
        }
        else {
            printf("Lua chon khong hop le! Vui long nhap lai.\n\n");
        }

    } while (hinh != 'a' && hinh != 'b' && hinh != 'c' && hinh != 'd');

    return 0;
}
