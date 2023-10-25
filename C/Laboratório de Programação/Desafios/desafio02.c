#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int i, vetorproduto [5];
    int codigoproduto[5];
    float vetorreais[5];
    float somaproduto[5];
    char nomeproduto[5][10];

    for (i = 0; i < 5; i++){
        printf("Insira o nome do produto que queres adquirir: ");
        scanf("%s", nomeproduto[i]);

        printf("Insira o codigo do produto que queres adquirir: ");
        scanf("%d", &codigoproduto[i]);

        printf("Digite a quantidade de cada produto respectivamente: ");
        scanf("%d", &vetorproduto[i]);

        printf("Digite o valor unitário do produto: ");
        scanf("%f", &vetorreais[i]);

        printf("\n");
    }
    
    for (i = 0; i < 5; i++){
        
        somaproduto[i] = vetorproduto[i] * vetorreais[i];
        printf("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\");
        printf("\nNome do produto: %s\nCodigo do produto:%d\nQuantidade: %d\nTotal: %.2f\n", nomeproduto[i], codigoproduto[i], vetorproduto[i], somaproduto[i]);
    }
    
    return 0;
}