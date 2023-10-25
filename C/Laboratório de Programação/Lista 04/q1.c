// Questão 1. Leia 3 valores inteiros (X, Y, Z), determina e escreve o menor deles.

#include <stdlib.h>
#include <stdio.h>

int main(){
    int X,Y,Z;

    printf("Digite tres variaveis: ");
    scanf("%d %d %d", &X, &Y, &Z);

    if (X < Y && X < Z){
        printf("O menor valor dessas tres variaveis eh: %d", X);
    }
    if (Y < X && Y < Z){
        printf("O menor valor dentre essas tres variaveis eh: %d", Y);
    }
    if (Z < X && Z < Y){
        printf("O menor valor dentre essas tres variaveis eh: %d", Z);
    }

    return 0;
}