#include <stdlib.h>
#include <stdio.h>

int main(){
    
    int idade;
    int serie;
    int livroslidosmes;
    int gostarredacao;
    int totalalunos = 0;
    int quantalunos3serie = 0;
    int maiorlivros4serie = -1;
    int alunos3seriesemredacao = 0;
    float percentagemalunos0redacao = 0;

    while (1){
        printf("\nDigite sua idade: ");
        scanf("%d", &idade);

        if(idade == 0){
            break;
        }

        printf("\nDigite sua serie (1,2,3 ou 4) ou digite 0 para cancelar: ");
        scanf("%d", &serie);

        printf("\nQuantos livros voce efetua a leitura por mes?: ");
        scanf("%d", &livroslidosmes);

        printf("\nVoce gosta de redacao? (0 para nao // 1 para sim): ");
        scanf("%d", &gostarredacao);

        if (serie == 3){
            quantalunos3serie++;
        }
        if (serie == 4 && livroslidosmes > maiorlivros4serie){
            maiorlivros4serie = livroslidosmes;
        }
        if (serie == 3 && gostarredacao == 0){
            alunos3seriesemredacao++;
        }

        totalalunos++;

    }

    if (quantalunos3serie > 0){
        percentagemalunos0redacao = alunos3seriesemredacao / quantalunos3serie * 100.0;
    }

    printf("\nResultados:\n");
    printf("Quantidade de alunos que estao na 3 serie: %d\n", quantalunos3serie);
    printf("Maior quantidade de livros lidos por um aluno de 4 serie: %d\n", maiorlivros4serie);
    printf("Porcentagem de alunos que nao gostam de fazer redacao e estao na terceira serie: %.2f\n", percentagemalunos0redacao);

    return 0;

}