// Questão 7. Leia 4 números e mostre a média ponderada, sabendo-se que os pesos são respectivamente: 1, 2, 3 e 4. A média aritmética ponderada é calculada multiplicando cada valor
// do conjunto de dados pelo seu peso. Depois, encontra-se a soma desses valores que será dividida pela soma dos pesos.

#include <stdio.h>
#include <stdlib.h>

int main(){
    float num1, num2, num3, num4;
    float media = 0;
    float soma = 0;

    printf("Digite quatro numeros para obter a media ponderada entre eles: ");
    scanf("%f %f %f %f", &num1, &num2, &num3, &num4);

    soma = num1 * 1 + num2 * 2 + num3 * 3 + num4 * 4;
    media = soma / 10; // (10 equivale a soma dos pesos 1 + 2 + 3 + 4 = 10)

    printf("A media ponderada entre %.2f %.2f %.2f %.2f equivale a: %.2f", num1, num2, num3, num4, media);

    return 0;
}