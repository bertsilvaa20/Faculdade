// Questão 3. Faça um programa que leia cinco números inteiros, calcule e escreva a soma, o produto e a média dos números lidos.
// produto = 1 pois se colocar 0 ele vai multiplicar por 0 (que é igual a nada.)

#include <stdlib.h>
#include <stdio.h>

int main(){
    int numero,cont;
    int soma = 0;
    int produto = 1;
    float media;

    for(cont = 0; cont < 5; cont++){   // valorinicial;valorfinal <; incremento (++ ou --)
        printf("Digite um numero inteiro: ");
        scanf("%d", &numero);
        soma += numero;
        produto *= numero;
    }

    media = soma / 5;

    printf("\nA soma entre os numeros lidos equivale a: %d\n", soma);
    printf("O produto entre os numeros lidos equivale a: %d\n", produto);
    printf("A media entre os numeros lidos equivale a: %.2f\n", media);

return 0;
}