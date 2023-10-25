#include <stdio.h>

int main() {
    char sexo;
    int idade;
    int livrosLidos;
    int totalLivrosMenores10 = 0;
    int mulheres5LivrosOuMais = 0;
    int totalIdadeHomensMenos5Livros = 0;
    int totalHomensMenos5Livros = 0;
    int totalPessoas = 0;
    int totalNaoLeramLivros = 0;

    while (1) {
        printf("Digite o sexo (M/F): ");
        scanf(" %c", &sexo);

        if (sexo == 'M' || sexo == 'm') {
            printf("Digite a idade do entrevistado: ");
            scanf("%d", &idade);

            if (idade < 0) {
                break; // Encerra a entrada de dados quando a idade for negativa
            }

            printf("Digite a quantidade de livros lidos em 2006: ");
            scanf("%d", &livrosLidos);

            totalPessoas++;

            if (livrosLidos < 0) {
                totalNaoLeramLivros++;
            }

            if (idade < 10) {
                totalLivrosMenores10 += livrosLidos;
            }

            if (sexo == 'M' || sexo == 'm') {
                if (livrosLidos < 5) {
                    totalIdadeHomensMenos5Livros += idade;
                    totalHomensMenos5Livros++;
                }
            }
        } else if (sexo == 'F' || sexo == 'f') {
            printf("Digite a quantidade de livros lidos em 2006: ");
            scanf("%d", &livrosLidos);

            if (livrosLidos >= 5) {
                mulheres5LivrosOuMais++;
            }

            totalPessoas++;
        }
    }

    // Cálculo da média de idade dos homens que leram menos de 5 livros
    float mediaIdadeHomensMenos5Livros = 0.0;
    if (totalHomensMenos5Livros > 0) {
        mediaIdadeHomensMenos5Livros = (float)totalIdadeHomensMenos5Livros / totalHomensMenos5Livros;
    }

    // Cálculo do percentual de pessoas que não leram livros
    float percentualNaoLeramLivros = 0.0;
    if (totalPessoas > 0) {
        percentualNaoLeramLivros = (float)(totalNaoLeramLivros * 100) / totalPessoas;
    }

    printf("\nResultados:\n");
    printf("Quantidade total de livros lidos por entrevistados menores de 10 anos: %d\n", totalLivrosMenores10);
    printf("Quantidade de mulheres que leram 5 livros ou mais: %d\n", mulheres5LivrosOuMais);
    printf("Média de idade dos homens que leram menos de 5 livros: %.2f\n", mediaIdadeHomensMenos5Livros);
    printf("Percentual de pessoas que não leram livros: %.2f%%\n", percentualNaoLeramLivros);

    return 0;
}