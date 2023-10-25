// Questão 9. Faça um programa que leia as variáveis y e z. Após, calcule e mostre o valor de x, dado pela expressão: x = /----y*(y^22 + z^33)
// raiz quadrada = sqrt() (necessário biblioteca math.h)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int y,z;

    printf("Digite o valor de y e z respectivamente: ");
    scanf("%d %d", &y, &z);

    printf("\nO resultado eh: %.2f", sqrt(y * (pow(y,22) + pow(z,33))));

    return 0;

}