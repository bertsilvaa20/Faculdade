#include <stdio.h>

int main(){
    int A, B, temp;

    printf("Digite o valor para A: ");
    scanf("%d", &A);

    printf("Digite o valor para B: ");
    scanf("%d", &B);

    temp = A;
    A = B;
    B = temp;

    printf("A = %d\n", A);
    printf("B = %d\n", B);

    return 0;
}