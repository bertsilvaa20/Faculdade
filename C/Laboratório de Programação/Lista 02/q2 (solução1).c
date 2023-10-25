// Questão 2. Faça um programa que leia dois valores nas variáveis A e B respectivamente, troque o valor contido na variável A pelo valor em B
//isto é, imprimiremos A e B com os valores trocados.

#include <stdlib.h>
#include <stdio.h>

int main(){
    int A,B;

    printf("Digite o valor de A e o valor de B respectivamente.");
    scanf("%d %d", &A, &B);

printf("O valor contido na letra A eh: %d\n\nO valor contido em B eh: %d\n\nInvertendo ambos ficaria = A: %d e B: %d", A, B, B, A);

return 0;
}