// Questão 5. Lê um número e mostra a terça parte deste número (para descobrir a terça parte de um número, basta multiplicar o número por 1/3 ou 0.33333333333).
#include <stdio.h>
#include <stdlib.h>

int main(){
    float num, tercaparte;

    printf("Digite um numero: ");
    scanf("%f", &num);

    tercaparte = num * 0.33333333333;  // 0.33333333333 == 1/3

    printf("A terca parte de %.2f equivale a %.2f", num, tercaparte);
    
    return 0;
}