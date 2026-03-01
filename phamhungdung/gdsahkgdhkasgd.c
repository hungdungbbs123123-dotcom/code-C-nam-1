#include <stdio.h>
#include <string.h>

#define MAX 100

struct ThiSinh {
    char MaTS[20];
    char HoTen[50];
    float diem;
};

int main() {
    // -- Nhap va in ra 2 thi sinh
    struct ThiSinh ts1, ts2;
    printf("=== Nhap 2 thi sinh ===\n");
    printf("Nhap ma thi sinh 1: ");
    scanf("%s", ts1.MaTS);
    getchar();
    printf("Nhap ho ten 1: ");
    fgets(ts1.HoTen, sizeof(ts1.HoTen), stdin);
    ts1.HoTen[strcspn(ts1.HoTen, "\n")] = '\0';
    printf("Nhap diem 1: ");
    scanf("%f", &ts1.diem);
    getchar();

    printf("Nhap ma thi sinh 2: ");
    scanf("%s", ts2.MaTS);
    getchar();
    printf("Nhap ho ten 2: ");
    fgets(ts2.HoTen, sizeof(ts2.HoTen), stdin);
    ts2.HoTen[strcspn(ts2.HoTen, "\n")] = '\0';
    printf("Nhap diem 2: ");
    scanf("%f", &ts2.diem);
    printf("=== Thong tin 2 thi sinh vua nhap ===\n");
    printf("Ma TS: %s | Ho ten: %s | Diem: %.2f\n",
           ts1.MaTS, ts1.HoTen, ts1.diem);
    printf("Ma TS: %s | Ho ten: %s | Diem: %.2f\n",
           ts2.MaTS, ts2.HoTen, ts2.diem);

    // -- Nhap danh sach nhieu thi sinh va loc
    // -- trung tuyen
    struct ThiSinh ds[MAX];
    int n;

    float diemChuan;
    printf("\nNhap so luong thi sinh: ");
    scanf("%d", &n);
    getchar(); // bo ky tu thua

    for (int i = 0; i < n; i++) {
        printf("\nThi sinh %d: \n", i + 1);
        printf("Nhap ma thi sinh: ");
        scanf("%s", ds[i].MaTS);
        getchar();
        printf("Nhap ho ten: ");
        fgets(ds[i].HoTen, sizeof(ds[i].HoTen), stdin);
        ds[i].HoTen[strcspn(ds[i].HoTen, "\n")] = '\0';
        printf("Nhap diem: ");
        scanf("%f", &ds[i].diem);
        getchar();
    }

    printf("\nNhap diem chuan: ");
    scanf("%f", &diemChuan);
    printf("\nDanh sach thi sinh trung tuyen\n");
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (ds[i].diem >= diemChuan) {
            printf("Ma TS: %s | Ho ten: %s | Diem: %.2f\n",
                   ds[i].MaTS, ds[i].HoTen, ds[i].diem);
            dem++;
        }
    }

    if (dem == 0) {
        printf("Khong co thi sinh nao trung tuyen!\n");
    }

    return 0;
}