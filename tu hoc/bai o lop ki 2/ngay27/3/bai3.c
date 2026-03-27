#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main() {
    FILE *a;
    a = fopen ("matran.txt","r");
    int i,j;
    int m,n;
    fscanf(a,"%d%d",&m,&n);
    int x[m][n];

    for (i=0;i<m;i++) {
        for (j=0;j<n;j++) {
            fscanf(a,"%d",&x[i][j]);
        }
    }

    int tong = 0;
    int dem = 0;
    for (i=0;i<m;i++) {
        for (j=0;j<n;j++) {
            if (x[i][j] % 2 != 0) {
                tong += x[i][j];
                dem++;
            }
        }
    }

    printf("Tong le: %lf",(double) tong/dem);

    


    return 0;
}
