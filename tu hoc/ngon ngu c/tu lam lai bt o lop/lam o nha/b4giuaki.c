#include<stdio.h>

typedef struct {
    char HoTen[67];
    char ChuyenMon;
    double tuoi;
}info;
int main() {
    int n;
    info bacsy[100];
    printf("nhap so bac sy : ");
    scanf("%d", &n);
    
    for(int i=0; i<n; i++){
        printf("Bac si so %d\n", i+1);

        printf("HoTen: ");
        getchar();
        gets(bacsy[i].HoTen);

        printf("chuyen mon: ");
        scanf("%c", &bacsy[i].ChuyenMon);

        printf("Tuoi: ");
        scanf("%lf", &bacsy[i].tuoi);

    }
    printf("Danh sach");
    for(int i=0; i<n; i++){
        
    }



}
