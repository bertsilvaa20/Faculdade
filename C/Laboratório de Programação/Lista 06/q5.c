#include <stdlib.h>
#include <stdio.h>


int main(){
    int Vet1[5];
    int Vet2[5];
    int Soma[5];
    int Diferenca[5];
    int Produto[5];
    float Divisao[5];

    
    printf("Informe os 5 valores para o Vet1:\n");
    for (int i = 0; i < 5; i++) {
        printf("Vet1[%d]: ", i);
        scanf("%d", &Vet1[i]);
    }

    
    printf("Informe os 5 valores para o Vet2:\n");
    for (int i = 0; i < 5; i++) {
        printf("Vet2[%d]: ", i);
        scanf("%d", &Vet2[i]);
    }

    
    for (int i = 0; i < 5; i++) {
        Soma[i] = Vet1[i] + Vet2[i];
        Diferenca[i] = Vet1[i] - Vet2[i];
        Produto[i] = Vet1[i] * Vet2[i];
        if (Vet2[i] != 0) {
            Divisao[i] = (float)Vet1[i] / Vet2[i];
        } else {
            Divisao[i] = 0; 
        }
    }


    printf("\nResultados:\n");
    for (int i = 0; i < 5; i++) {
        printf("Vet1[%d] + Vet2[%d] = %d\n", i, i, Soma[i]);
        printf("Vet1[%d] - Vet2[%d] = %d\n", i, i, Diferenca[i]);
        printf("Vet1[%d] * Vet2[%d] = %d\n", i, i, Produto[i]);
        printf("Vet1[%d] / Vet2[%d] = %.2f\n", i, i, Divisao[i]);
    }

    return 0;
}
