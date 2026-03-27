#include <stdio.h>

int main() {
    FILE*fptr;
    char tensp[]= "aothun";
    float giasp =150.0;
    int soluong =5;

    fptr = fopen ("san_pham.txt", "w");

    if (fptr == NULL){
        printf("ko the mo file");
        return 1;
    }

    fputs ("danh sach san pham \n", fptr);

    fprintf(fptr, "tensp: %s\n", tensp);
    fprintf(fptr, "gia: %.2f VND\n", giasp);
    fprintf(fptr, "soluong: %d\n", soluong);

    fputc ('\n', fptr);
    fputs ("da luu thong tin san pham.\n", fptr);

    fclose(fptr);
    printf("da ghi du lieu vao file san_pham.txt");


    return 0;
}
