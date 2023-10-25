// Questão 4. Um Banco concederá um crédito especial aos seus clientes, variável com o saldo médio no último
// ano. Faça um algoritmo que leia o saldo médio de um cliente e calcule o valor do crédito de acordo
// com a tabela abaixo. Mostre uma mensagem informando o saldo médio e o valor do crédito.

#include <stdlib.h>
#include <stdio.h>

int main(){
    float saldomedio;

    printf("Digite seu saldo medio para visualizar o credito: ");
    scanf("%f", &saldomedio);

    if (saldomedio >= 0 && saldomedio <= 200.00){
        printf("\nCredito = 0");
    }
    else if(saldomedio >= 201.00 && saldomedio <= 400.00){
        printf("\nCredito = %.2f", saldomedio * 0.20);
    }
    else if(saldomedio >= 401.00 && saldomedio <= 600.00){
        printf("\nCredito = %.2f", saldomedio * 0.30);
    }
    else if(saldomedio >= 600.00){
        printf("\nCredito = %.2f", saldomedio * 0.40);
    }

    return 0;
}