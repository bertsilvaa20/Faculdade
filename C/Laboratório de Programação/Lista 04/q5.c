// Questão 5. Um vendedor necessita de um programa que calcule o preço total devido por um cliente. O programa
//deve receber o código de um produto e a quantidade comprada e calcular o preço total, usando a
// tabela abaixo. Mostrar uma mensagem no caso de código inválido.

#include <stdlib.h>
#include <stdio.h>

int main(){
    int codprod, quantprod;

    printf("Digite o codigo do produto adquirido(1001, 1324, 6548, 987, 7623): ");
    scanf("%d", &codprod);

    printf("Qual foi a quantidade adquirida desse produto?: ");
    scanf("%d", &quantprod);

    if(codprod == 1001){
        printf("\nO valor total a ser pago eh de: %.2f", 5.32 * quantprod);
    }
    else if(codprod == 1324){
        printf("\nO valor total a ser pago eh de: %.2f", 6.45 * quantprod);
    }
    else if (codprod == 6548){
        printf("\nO valor total a ser pago eh de: %.2f", 2.37 * quantprod);
    }
    else if (codprod == 987){
        printf("\nO valor total a ser pago eh de: %.2f", 5.32 * quantprod);
    }
    else if (codprod == 7623){
        printf("\nO valor total a ser pago eh de: %.2f", 6.45 * quantprod);
    }

    return 0;
}