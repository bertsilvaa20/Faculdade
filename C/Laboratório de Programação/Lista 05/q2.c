// Faça um programa que solicite ao usuário para digitar valores numéricos inteiros positivos.
// Encerre a entrada de dados quando for digitado um número negativo ou zero. Calcule a média dos
// números positivos digitados.

#include <stdlib.h>
#include <stdio.h>

int main(){
    int num, i = 0, soma = 0;
    float media;

    printf("Digite valores numericos inteiros positivos: 'caso deseje encerrar o programa digite '0' ou um numero negativo' \n");

    while (1){
        printf("\nDigite um numero inteiro: ");
        scanf("%d", &num);

        if (num <= 0){
            break;
        }

        soma += num;
        i++;
    }

    if (i > 0){
        media = soma / i;
        printf("\nA media dos numeros escritos eh a seguinte: %.2f", media);
    }
    else{
        printf("Nenhum numero positivo foi digitado!");
    }

    return 0;

}