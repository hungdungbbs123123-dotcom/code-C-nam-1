#include<stdio.h>
int main(){
    int m, n, max;
    int i;
    float a[40], b[40], c[40];
    printf("nhap da thuc P:");
    printf("\nnhap bac cua da thuc:");
    scanf("%d", &m);

    for (i=0; i<=m; i++){
        printf("he so thu %d: ", i);
        scanf("%f", &a[i]);
    }
    while (a[m]==0){
        printf("\the so thu %d khac 0: ", m);
        scanf("%f", &a[m]);
    }

    printf("\nnhap da thuc Q:");
    printf("\nnhap bac cua da thuc:");
    scanf("%d", &n);    

    for (i=0; i<=n; i++){
        printf("he so thu %d: ", i);
        scanf("%f", &b[i]);
    }
    while (b[n]==0){
        printf("\the so thu %d khac 0: ", n);
        scanf("%f", &b[n]);
    }

    int min;
    max=(m>n)?m:n;
    min=(m<n)?m:n;
    for(i=0; i<=min, i++;)
        c[i]=a[i]=b[i];
    for(i=min+1; i<=max; i++)
        c[i]=(max==m)?a[i]:b[i];

    printf("\nda thuc P: ");
    for (i=0; i<m; i++)
        if(a[i]==0){
            printf("");
        }
        else if(a[i]>0)
        printf("+%.2fx^%d", a[i], i);
        else
        printf("%.1fx^%d", a[i], i);
    puts("\nda thuc bac Q: ");
    for (i=0; i<m; i++)
        if(b[i]==0){
            printf("");
        }
        else if(a[i]>0)
        printf("+%.2fx^%d", a[i], i);
        else
        printf("%.1fx^%d", a[i], i);
}