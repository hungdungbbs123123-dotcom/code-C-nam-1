#include <stdio.h>

int main() {
    int a, b;
    float diem[100];
    int tinchi[100];
    float tongdiem = 0;
    int tongtinchi = 0; 
    float diemtrungbinh;

    printf("Nhap so mon hoc: ");
    scanf("%d", &a);

    for (b = 0; b < a; b++) {
        printf("\nMon %d:\n", b + 1);
        printf("Nhap diem: ");
        scanf("%f", &diem[b]);
        printf("Nhap so tin chi: ");
        scanf("%d", &tinchi[b]);
    }

    for (b = 0; b < a; b++) {
        tongdiem += diem[b] * tinchi[b];
        tongtinchi += tinchi[b];
    }


    printf("\n--- Cac mon hoc ---\n");
    for (b = 0; b < a; b++) {
        printf("\nMon %d:\n", b + 1);
        printf("Diem   : %.2f\n", diem[b]);
        printf("Tin chi: %d\n", tinchi[b]);
    }

    diemtrungbinh = tongdiem / tongtinchi;
    printf("\nDiem trung binh: %.2f\n", diemtrungbinh);

    return 0;
}

