// Questão 5. Faça um programa que leia A, B e C e calcule a seguinte fórmula: (7*C+5*B) / (2*A*3), armazenando-a na variável Result.

#include <stdlib.h>
#include <stdio.h>

int main(){
    int A = 0,B = 0,C = 0;
    float result = 0;

    printf("Digite o valor de A, B e C respectivamente: ");
    scanf("%d %d %d", &A, &B, &C);

    
    result = (7*C + 5*B) / (2*A*3);

    printf("A: %d\nB: %d\nC: %d", A, B, C);
    printf("\n\nO resultado eh: %.2f", result);
    return 0;
}