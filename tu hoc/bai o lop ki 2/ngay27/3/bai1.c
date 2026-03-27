#include <stdio.h>

int main() {
    int n, i;
    FILE*f;
    double sum=0;
    f=fopen("numbers.txt","r");
    if (f==NULL){
        printf("ko co file");
        return 1;
    }

    fscanf(f,"%d", &n);
    int a[n];
    for (i=0; i<n; i++){
        fscanf(f,"%d", &a[i]);
        sum +=a[i];
    }
    printf("tong=%f", sum);
    fclose(f);

    return 0;
}
