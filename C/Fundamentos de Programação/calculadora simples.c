#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    float num1, num2;
    int operacao;
    
    printf("**Bem-vindo a Calculadora!!!**\n\n");
    
    printf("Quais dois números você quer usar para realizar o cálculo?\n");
    scanf("%f %f", &num1, &num2);
    
    printf("Qual operação queres realizar com os números citados? 1 - SOMA 2 - SUBTRAÇÃO 3- MULTIPLICAÇÃO 4 - DIVISÃO\n");
    scanf("%d", &operacao);

    if (operacao == 1){
        printf("\nO resultado da soma entre esses dois números é de %.2f", num1 + num2);
    }
    if (operacao == 2){
        printf("\nO resultado da subtração entre esses dois números é de %.2f", num1 - num2);
    }
    if (operacao == 3){
        printf("\nO resultado da multiplicação entre esses dois números é de %.2f", num1 * num2);
    }
    if (operacao == 4){
        printf("\nO resultado da divisão entre esses dois números é de %.2f", num1 / num2);
        
    return 0;
    }
    
    
    
    
    
    
    
    
    
    
}