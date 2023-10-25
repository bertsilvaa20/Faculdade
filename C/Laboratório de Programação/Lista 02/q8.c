// Questão 8. O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do distribuidor e dos impostos (aplicados ao custo de fábrica).
// Supondo que a percentagem do distribuidor seja de 28% e os impostos de 45% escrever um programa em C que leia o custo de fábrica de um carro e escreva ocusto ao consumidor.

#include <stdlib.h>
#include <stdio.h>

int main(){

    float valorfabrica = 0, valorfinal = 0;

    printf("Diga o valor de fabrica do carro desejado: ");
    scanf("%f", &valorfabrica);

    valorfinal = valorfabrica + (valorfabrica * 0.28) + (valorfabrica * 0.45);
                                    //distribuidor          //impostos
                                    
    printf("O custo final/total do seu carro eh de: %.2f", valorfinal);

    return 0;

}