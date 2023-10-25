#include <stdio.h>

int main() {
    int num_alunos;


    printf("Informe o número de alunos: ");
    scanf("%d", &num_alunos);

    
    float notasG1[num_alunos];
    float notasG2[num_alunos];
    float medias[num_alunos];

    
    for (int i = 0; i < num_alunos; i++) {
        printf("Informe a nota G1 do aluno %d: ", i + 1);
        scanf("%f", &notasG1[i]);

        printf("Informe a nota G2 do aluno %d: ", i + 1);
        scanf("%f", &notasG2[i]);

        
        medias[i] = (notasG1[i] + notasG2[i]) / 2;
    }

    
    printf("Notas dos alunos:\n");
    for (int i = 0; i < num_alunos; i++) {
        printf("Aluno %d - G1: %.2f, G2: %.2f, Média: %.2f\n", i + 1, notasG1[i], notasG2[i], medias[i]);
    }

    return 0;
}