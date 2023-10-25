// Questão 2. Mostrar a média aritmética entre 3 números passados pelo usuário.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1,num2,num3;
    float soma = 0;
    float media;

    printf("Cite tres numeros inteiros para saber a media aritmetica entre eles: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    soma = num1 + num2 + num3;
    media = soma / 3;

    printf("A media aritmetica entre %d %d %d eh de: %.2f", num1, num2, num3, media);

    return 0;
}