// Questão 13. Leia o numerador e o denominador de uma fração e transforme-o em um número decimal.

#include <stdlib.h>
#include <stdio.h>

int main(){

    int numerador, denominador;

    printf("Digite o numerador e o denominador de uma fracao, respectivamente: ");
    scanf("%d %d", &numerador, &denominador);

    printf("Essa fracao em decimal eh: %d ", numerador / denominador);

    return 0;
}