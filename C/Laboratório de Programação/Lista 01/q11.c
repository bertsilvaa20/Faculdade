// Questão 11. Calcule e mostre a área de um triângulo (área é igual a (base x altura) dividido por 2)

#include <stdlib.h>
#include <stdio.h>

int main(){
    float base, altura, area;

    printf("\nPara descobrir a area do triangulo digite primeiro sua base e sua altura respectivamente: ");
    scanf("%f %f", &base, &altura);

    area = (base * altura) / 2;

    printf("\n\nA area desse triangulo de base %.2f e altura %.2f equivale a %.2f", base, altura, area);

    return 0;
}