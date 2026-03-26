#include <stdio.h>
#include<stdlib.h>

typedef struct {
    int tu;
    int mau;
}phanso;

int uocchungmax(int a, int b){
    if(a<0) a= -a;
    if(b<0) b= -b;
    while (b!=0){
        int t=b;
        b = a%b;
        a = t;
    }
    return a;
}

phanso rutgon(phanso ps){
    if(ps.mau <0){
        ps.tu = -ps.tu;
        ps.mau = -ps.mau;
    }
    int g= uocchungmax(ps.tu, ps.mau);
    ps.tu = ps.tu /g;
    ps.mau = ps.mau/g;
    return ps;
}

void inphanso(phanso ps){
    printf("%d/%d", ps.tu, ps.mau);
}

double giatri(phanso ps){
    return (double)ps.tu/ps.mau;
}

phanso* docFile(int* n){
    FILE* f = fopen("ps.txt", "r");
    if(f == NULL){
        printf("file ko ton tai");
        return NULL;
    }
    fscanf(f, "%d", n);

    phanso* ds = (phanso*) malloc(*n * sizeof(phanso));
    for(int i=0; i<*n; i++){
        fscanf(f, "%d %d", &ds[i].tu, &ds[i].mau);
    }
    fclose(f);
    return ds;
}

void inphansomax(phanso* ds, int n){
    int max =0;
    for (int i=0; i<n; i++){
        if (giatri(ds[i]) > giatri(ds[max])) {
        max =i;
        }
    }

    printf("phan so lon nhat: ");
    inphanso(ds[max]);
    printf("\n");

}

void tong(phanso* ds, int n){
    phanso tong;
    tong.tu=0; 
    tong.mau =1;

    for (int i=0; i<n; i++){
        tong.tu = tong.tu *ds[i].mau +ds[i].tu*tong.mau;
        tong.mau=tong.mau*ds[i].mau;
        tong = rutgon(tong);
    }

    printf("tong cac phan so: ");
    inphanso(tong);
    printf("\n");
}

void rutgonxuatfile(phanso* ds, int n){
    FILE* f = fopen("psrutgon.txt", "w");
    if (f == NULL){
        printf("\nko tim thay file");
        return ;
    }
    fprintf(f, "%d\n", n);
    for (int i=0; i<n; i++){
        phanso rg = rutgon(ds[i]);
        fprintf(f,"%d %d\n", rg.tu, rg.mau);
    }
    fclose(f);
}
int main() {
    int n;
    phanso* ds = docFile(&n);
    inphansomax(ds, n);
    tong(ds, n);
    rutgonxuatfile(ds, n);
    free(ds);

    return 0;
}
