// Questão 8. Lê o saldo de uma aplicação e imprima o novo saldo, considerado o reajuste de 1%. acrescentar 1% (* 1.01) desconto de 1% (* 0.99)

#include <stdlib.h>
#include <stdio.h>

int main(){
    float saldo = 0; 

    printf("\nDigite um determinado saldo: ");
    scanf("%f", &saldo);

    printf("\nO saldo de %.2f com um acrescimo de 1 por cento equivale a: %.2f ", saldo, saldo * 1.01);
    
    return 0;
}