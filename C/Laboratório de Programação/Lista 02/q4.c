// Questão 4. Faça um programa que leia dois valores inteiros (X e Y) e calcule X na potência Y. Observação: utilizar a função matemática.
// funcão matemática para trabalhar com potência: pow(base, expoente)

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    int X, Y;

    printf("Digite o valor de X e de Y respectivamente: ");
    scanf("%d %d", &X, &Y);

    printf("%d elevado a %d equivale a: %.2f", X, Y, pow(X,Y));

    return 0;
}