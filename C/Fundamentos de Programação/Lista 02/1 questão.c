#include <stdlib.h>
#include <stdio.h>

int main(){
    int idade, numerodasorte, numerodasorte2, numerodasorte3, valordacompra;


    printf("Insira o valor total da sua compra:.. \n");
    scanf("%d", &valordacompra);

    printf("Insira a sua idade:.. \n");
    scanf("%d", &idade);
    
    numerodasorte = valordacompra * idade - 5000;
    numerodasorte2 = valordacompra * idade - 50000;
    numerodasorte3 = idade * idade;
    
    if (valordacompra < 500){
        printf("O seu numero da sorte é: %d", numerodasorte);
    }
    if (valordacompra > 500){
        printf("O seu numero da sorte é: %d", numerodasorte2);
    }
    if (valordacompra == 500){
        printf("O seu numero da sorte é: %d", numerodasorte3);
    }

return 0;
    }