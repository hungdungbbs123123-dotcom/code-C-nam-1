#include <stdio.h>

int main() {
    int n;
    int A[100][100];
    FILE*f;
    f=fopen("input.txt", "r");
    fscanf(f,"%d", &n);

    int i, j;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            fscanf(f,"%d" ,&A[i][j]);
        }
    }
    fclose(f);

        printf("ma tran\n");
        for ( i=0; i<n; i++){
            for (j=0; j<n; j++){
                printf("%d ", A[i][j]);
            }
            printf("\n");
        }
    

    int tong =0;
    int dem=0;
    for(i=0; i<n; i++){
        for (j=0; j<n; j++){
            if (A[i][j]%2 !=0){
                tong += A[i][j];
                dem++;
            }
            
        }
    }
    int tbc;
    tbc = tong / dem;
    printf("tbc = %d", tbc);
    return 0;
}
