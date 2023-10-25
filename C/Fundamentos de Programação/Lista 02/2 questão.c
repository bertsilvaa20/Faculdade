#include <stdlib.h>
#include <stdio.h>

int main(){
    float salario, financiamento, limite;
    
    printf("Digite o salário:.. \n");
    scanf("%f", &salario);
    
    printf("Digite o financiamento pretendido:.. \n");
    scanf("%f", &financiamento);
    
    limite = salario * 5;
    
    if (financiamento < limite){
        printf("Financiamento concedido!");
    }
    else{
        printf("Financiamento negado! \n");
    }
    printf("Obrigado por nos consultar!");
    
    return 0;
}