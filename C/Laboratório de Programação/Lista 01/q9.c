// Questão 9. Entre com a base e a altura de um retângulo e mostre os resultados: a. Perímetro (Perímetro é igual à soma dos 4 lados) b. Área (Área é igual a lado vezes lado).

#include <stdio.h>
#include <stdlib.h>

int main(){
    float base, altura, perimetro, area;

    printf("Digite a base e a altura de um retangulo respectivamente: ");
    scanf("%f %f", &base, &altura);

    perimetro = base * 2 + altura * 2;

    area = altura * altura;

    printf("O perimetro desse retangulo de base %.2f e altura %.2f equivale a: %.2f\n\nA area desse retangulo equivale a %.2f", base, altura, perimetro, area);

    return 0;
}

