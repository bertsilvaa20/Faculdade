#include <stdio.h>

int main() {
    char alunos[5][50];
    float notasN1[5];
    float notasN2[5];
    float notasN3[5];

    printf("Informe os nomes dos 5 alunos matriculados:\n");
    for (int i = 0; i < 5; i++) {
        printf("Aluno %d: ", i + 1);
        scanf("%s", alunos[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf("Informe as notas N1, N2 e N3 para o aluno %s:\n", alunos[i]);
        printf("N1: ");
        scanf("%f", &notasN1[i]);
        printf("N2: ");
        scanf("%f", &notasN2[i]);
        printf("N3: ");
        scanf("%f", &notasN3[i]);
    }

    printf("\nResultado:\n");
    for (int i = 0; i < 5; i++) {
        float media = (notasN1[i] + notasN2[i] + notasN3[i]) / 3.0;
        printf("Aluno: %s\n", alunos[i]);
        printf("Média Final: %.2f\n", media);
        if (media >= 6.0) {
            printf("Situação: Aprovado\n");
        } else {
            printf("Situação: Reprovado\n");
        }
        printf("\n");
    }

    return 0;
}