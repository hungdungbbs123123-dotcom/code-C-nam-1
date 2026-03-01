#include<stdio.h>

int main (){
    int A = 5, B = 7;
    int T = A & B;
    int T1 = A | B;

    printf("%d & %d = %d\n", A, B, T);
    printf("%d | %d = %d\n", A, B, T1);

    printf("%d >> 1 = %d\n", A, (A>>1));



    return 0;
}