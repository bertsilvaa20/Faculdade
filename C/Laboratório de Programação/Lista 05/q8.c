#include <stdio.h>

int main(){

    int id;
    float valor;
    float percentualAumento;
    float novoValor;
    int produtosMaisCaros = 0;
    float somaValoresSemAumento = 0;
    int quantidadeProdutosSemAumento = 0;
    float maiorValorAposAumento = -1;

    while (1){
        printf("Digite o ID do produto (ou 0 para encerrar): ");
        scanf("%d", &id);

        if (id == 0) {
            break;
        }

        printf("Digite o valor do produto: R$ ");
        scanf("%f", &valor);

        printf("Digite o percentual de aumento (em porcentagem): ");
        scanf("%f", &percentualAumento);

        novoValor = valor + (valor * percentualAumento / 100.0);

        printf("Novo valor do produto: R$ %.2f\n", novoValor);

        if (novoValor > 100.0 && percentualAumento > 5.0) {
            produtosMaisCaros++;
        }

        if (percentualAumento == 0.0) {
            somaValoresSemAumento += valor;
            quantidadeProdutosSemAumento++;
        }

        if (novoValor > maiorValorAposAumento) {
            maiorValorAposAumento = novoValor;
        }
    }

    float mediaValoresSemAumento = 0.0;
    if (quantidadeProdutosSemAumento > 0) {
        mediaValoresSemAumento = somaValoresSemAumento / quantidadeProdutosSemAumento;
    }

    printf("\nResultados:\n");
    printf("Quantidade de produtos mais caros que R$ 100,00 (após aumento) e com aumento superior a 5%%: %d\n", produtosMaisCaros);
    printf("Média de valor dos produtos que não sofreram aumento: R$ %.2f\n", mediaValoresSemAumento);
    printf("Valor do produto mais caro (após aumento): R$ %.2f\n", maiorValorAposAumento);

    return 0;
}