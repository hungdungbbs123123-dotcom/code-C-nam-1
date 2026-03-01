#include <stdio.h>

int main() {
    int i, n;
    float a;
    printf("nhap he so a");
    scanf("%d", &n);
    printf("f(x) = ");
    for ( i = 1; i <= n; i++) {
        scanf("%f", &a);
        printf("%.2fx%d", a, i);
        if (i < n) printf(" + ");
    }
    return 0;
}
