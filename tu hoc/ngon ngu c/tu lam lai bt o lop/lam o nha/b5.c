#include<stdio.h>

int main (){
    int m,n;
    double a[100][100];

    printf("nhap ma tran m va n:");
    scanf("%d %d", &m, &n);

    for (int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("nhap a[%d][%d]", i, j);
            scanf("%lf", &a[i][j]);
        }
    }

if (n%m !=0){
    printf("ma tran ko doi xung");
}else{
    int doixung = 1;
    for (int i =0; i<m; i++){
        for (int j=n+1; j<n; j++){
            if (a[i][j] != a[j][i]){
                doixung =0;
                break;
            }
        }
    }
}

for(int i=0; i<m; i++){
    double max = a[i][0];
    for (int j=1; j<n; j++){
        if (a[i][j]>max){
            max = a[i][j];
        }
    }
    printf("hang %d: %.2lf\n", i, max);
}
return 0;
}
