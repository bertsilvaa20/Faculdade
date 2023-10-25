// Questão 12. Calcule o valor de uma prestação em atraso, utilizando a fórmula: PRESTAÇÃO = VALOR + (VALOR * (TAXA/100) * TEMPO).

#include <stdlib.h>
#include <stdio.h>

int main(){
    float prestacao, valor, taxa;
    int tempomeses;

    printf("\nDigite o valor da prestacao : ");
    scanf("%f", &valor);

    printf("\nDigite o valor da taxa em porcentagem: ");
    scanf("%f", &taxa);

    printf("\nDigite o tempo da prestacao em meses: ");
    scanf("%d", &tempomeses);

    prestacao = valor + (valor * taxa / 100) * tempomeses;

    printf("\nO valor da prestacao eh de: %.2f", prestacao);

    return 0;
}
