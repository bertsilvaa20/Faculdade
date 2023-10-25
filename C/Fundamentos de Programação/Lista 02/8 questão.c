#include <stdio.h>

int main(){

    float preco;

    printf("Entre com o PRECO DE COMPRA.\n");
    scanf("%f",&preco);

    if(preco < 1200){

        printf("VALOR DE VENDA : %.2f\n", preco * 1.45);

    }else{
        printf("VALOR DE VENDA : %.2f\n", preco * 1.30);
    }


    return(0);
}
