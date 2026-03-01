#include<stdio.h>

int main() {
    int masinhvien;
    char hovaten[50];
    float diemthi, diemquatrinh, tylediemquatrinh;
    printf("nhap ho ten:");
scanf(" %[^\n]s", hovaten);
    printf("ma sinh vien:");
   scanf("%d", &masinhvien);
   printf("diemthi:");
   scanf("%f", &diemthi);
   printf("diemquatrinh:");
   scanf("%f", &diemquatrinh);
   printf("tylediemquatrinh:");
   scanf("%f", &tylediemquatrinh);
       float diemmon = diemquatrinh * tylediemquatrinh + diemthi *(1.0f - tylediemquatrinh);
char xeploai;
if (diemmon >=8.5) {
    xeploai = 'A';
}else if (diemmon >=7) {
    xeploai ='B';
}else if (diemmon >=5.5) {
    xeploai ='C';
}else if (diemmon >=4) {
    xeploai ='D';
}else {
    xeploai ='E';
}
printf("thong tin sinh vien");
printf("hovaten %s\n", hovaten);
printf("masinhvien %d\n", masinhvien);
printf("diemmon %.1f\n", diemmon);
printf("xeploai %c\n", xeploai);
return 0;

}

 






