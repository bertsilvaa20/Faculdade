#include <stdio.h>
#include <stdlib.h>

int main() {
    // Variáveis
    int codCli, codProd, qtdade;
    float precoUnit, valorTotal;

    // Estrutura de repetição para o Cliente receber o Produto Comprado
    while (1) {
        valorTotal = 0;
        printf("\n1. Digite o cod. do cliente ou Digite zero para sair: ");
        scanf("%d", &codCli);

        if (codCli == 0) {
            break;
        }

        // Estrutura de repetição para o Cliente comprar mais de um Produto
        printf("\nInforme os produtos comprados pelo cliente %d:\n", codCli);

        while (1) {
            printf("\t2. Digite o codigo do produto. Digite -1 para encerrar a execucao: ");
            scanf("%d", &codProd);

            if (codProd == -1) {
                break;
            }

            printf("\t\t3. Digite a qtdade comprada do produto %d: ", codProd);
            scanf("%d", &qtdade);
            printf("\t\t4. Digite o valor unitario do produto %d: ", codProd);
            scanf("%f", &precoUnit);

            float subtotal = qtdade * precoUnit;
            valorTotal += subtotal;

            // Imprime informações detalhadas sobre o produto
            printf("\n\t\tProduto: %d\n", codProd);
            printf("\t\tQuantidade: %d\n", qtdade);
            printf("\t\tValor Unitario: R$ %.2f\n", precoUnit);
            printf("\t\tSubtotal: R$ %.2f\n\n", subtotal);
        }

        // Imprime o valor total da compra
        printf("\n=====================================================\n");
        printf("O cliente %d deve pagar R$ %.2f\n", codCli, valorTotal);
        printf("=====================================================\n\n");
    }

    system("pause");
    return 0;
}