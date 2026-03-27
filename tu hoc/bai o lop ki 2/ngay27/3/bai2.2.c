#include <stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    char masp[10];
    char tensp[15];
    double gia;

}sanpham;

void sort(int n, sanpham*s){
    int i,j;
    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            if(s[i].gia<s[j].gia){
                sanpham temp=s[i];
                s[i]=s[j];
                s[j]= temp;
            }
        }
    }
}

int main() {
    int i, n;
    scanf("%d", &n);
    getchar();
    sanpham sp[n];
    for (i=0; i<n; i++){
        fgets(sp[i].masp, sizeof(sp[i].masp), stdin);
        sp[i].masp[strlen(sp[i].masp)-1]=0;
        fgets(sp[i].tensp,sizeof(sp[i].tensp),stdin);
        sp[i].tensp[strlen(sp[i].tensp)-1] = 0;
        scanf("%lf", &sp[i].gia);
        getchar();
    }

    FILE*f;
    f=fopen("sorted.txt", "w");
    if(f==NULL){
        return 1;
    }
    sort(n, sp);
    for (i=0; i<n; i++){
        printf("%s  %s  %lf\n",sp[i].masp,sp[i].tensp,sp[i].gia);
        fprintf(f,"%s  %s  %lf\n",sp[i].masp,sp[i].tensp,sp[i].gia);
        
    }
    fclose(f);

    return 0;
}
