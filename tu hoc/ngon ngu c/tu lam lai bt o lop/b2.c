#include<stdio.h>
#include<string.h>

typedef struct{
    char hoTen[36];
    double diem;
    char truong;
}thisinh;
int n;
double diemtrgA=0,diemtrgB=0,diemtrgC=0;
thisinh ts[100];
int main (){
    printf("nhap so thi sinh:");
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++) {
    printf("Thi sinh %d\n", i + 1);

    printf("Nhap ho ten: ");
    fgets(ts[i].hoTen, sizeof(ts[i].hoTen), stdin);
    ts[i].hoTen[strcspn(ts[i].hoTen, "\n")] = '\0';

    printf("Nhap diem: ");
    scanf("%lf", &ts[i].diem);
    getchar(); 
    
    printf("Nhap ten trg: ");
    scanf(" %c", &ts[i].truong); 
    getchar();
    }

    float diemMax = ts[0].diem;
    for(int i=0; i<n; i++){
        if(ts[i].truong=='A'||ts[i].truong=='a'){
            diemtrgA+=ts[i].diem;
        }else if(ts[i].truong=='B'||ts[i].truong=='b'){
            diemtrgB+=ts[i].diem;
        }else if(ts[i].truong=='C'||ts[i].truong=='c'){
            diemtrgC+=ts[i].diem;
        }
        if(ts[i].diem>=diemMax){
            diemMax = ts[i].diem;
        }
    }
    if(diemtrgA<diemtrgB&&diemtrgA<diemtrgC){
        printf("trg co diem thap nhat %lf la trg A", diemtrgA);
    }else if(diemtrgB<diemtrgA&&diemtrgB<diemtrgC){
        printf("trg co diem thap nhat %lf la trg B ", diemtrgB);
    }else if(diemtrgC<diemtrgA&&diemtrgC<diemtrgB){
        printf("trg co diem thap nhat %lf la trg C ", diemtrgC);
    }
   printf("\n");

    int count = 0;
    for(int i=0; i<n; i++){
        if(ts[i].diem == diemMax){
            count++;
        }

    }
    
    printf("thi sinh co diem cao nhat: %d", count);
    return 0;
}   