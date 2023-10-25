#include <stdio.h>
#include <stdlib.h>

int main(){
    int parcelas;
    float valordacompra;
    
    printf("Qual foi o valor da compra a vista?:..");
    scanf("%f", &valordacompra);
    
    printf("Em quantas parcelas?:.. (1,2,3)");
    scanf("%d", &parcelas);
    
    if (parcelas <= 1){
        valordacompra = valordacompra;
        printf("\n \n**Número de parcelas**: %d", parcelas);
        printf("\n**Valor total a ser pago**: %.2f", valordacompra);
        
    }
    if (parcelas >= 3){
        valordacompra = valordacompra * 1.20;
        printf("\n \n**Número de parcelas**: %d", parcelas);
        printf("\n**Valor total a ser pago**: %.2f", valordacompra);
    }
    if (parcelas == 2){
        valordacompra = valordacompra * 1.10;
        printf("\n \n**Número de parcelas**: %d", parcelas);
        printf("\n**Valor total a ser pago**: %.2f", valordacompra);
    }
    return 0;
}