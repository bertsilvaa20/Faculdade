#include <stdio.h>
#include <string.h>

int main() {
    char aprovados[10][50]; 
    char nome[50];
    int i;

    
    printf("Informe os nomes dos 10 alunos aprovados:\n");
    for (i = 0; i < 10; i++) {
        printf("Aprovado %d: ", i + 1);
        scanf("%s", aprovados[i]);
    }

    
    printf("Informe o nome a ser pesquisado: ");
    scanf("%s", nome);

    
    for (i = 0; i < 10; i++) {
        if (strcmp(aprovados[i], nome) == 0) {
            printf("O aluno %s foi aprovado em %do. lugar.\n", nome, i + 1);
            break;
        }
    }

    
    if (i == 10) {
        printf("Nome informado não consta na lista dos aprovados.\n");
    }

    return 0;
}