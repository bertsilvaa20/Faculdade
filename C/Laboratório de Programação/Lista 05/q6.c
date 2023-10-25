#include <stdlib.h>
#include <stdio.h>

int main(){

    int i;
    int idade[200];
    int identificador[200];
    int opiniao[200];
    int opiniao10 = 0;
    int totalpessoas = 0;
    int identificadormaisvelha = 0;
    int idademaisvelha = 0;
    float cincomenos = 0;
    float totalidadepessoas = 0;

    for (i = 0; i <= 200; i++){
        printf("Digite sua idade: ");
        scanf("%d", &idade[i]);

        if (idade[i] < 0){
            break;
        }

        printf("Digite seu identificador: ");
        scanf("%d", &identificador[i]);

        printf("Digite sua opiniao em relacao a peca (0 a 10)");
        scanf("%d", &opiniao[i]);

        if (opiniao[i] == 10){
            opiniao10++;
        }

        totalidadepessoas += idade[i];
        totalpessoas++;
        
        if (opiniao[i] <= 5){
            cincomenos++;
        }
        if (idade[i] > idademaisvelha){
            idademaisvelha = idade[i];
            identificadormaisvelha = identificador[i];
        }

    }

        float mediaidade = totalidadepessoas / totalpessoas;

        float percentual5oumenosopiniao = cincomenos / totalpessoas * 100.0;

        printf("\n\nResultados:\n");
        printf("A quantidade de respostas 10 foram: %d\n", opiniao10);
        printf("A media de idade das pessoas que responderam o quest equivale a: %.2f\n", mediaidade);
        printf("A percentagem de pessoas que deram 5 ou menos na opiniao sobre a peca: %.2f%%\n", percentual5oumenosopiniao);
        printf("Identificador da pessoa mais velha: %d", identificadormaisvelha);

        return 0;
}