#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1, num2, total1, total2, total3, total4;
    char caractere;
    
    printf("Digite um caractere (*, /, +, -):.. ");
    scanf("%c", &caractere);
    
    printf("Digite dois números inteiros:.. ");
    scanf("%d", &num1, &num2);
    
    
    total1 = num1 * num2;
    total2 = num1 / num2;
    total3 = num1 + num2;
    total4 = num1 - num2;
    
    if (caractere == '*'){
        printf("\nA multiplicação entre %d e %d é igual a %d", num1, num2, total1);
    }
    if (caractere == '/'){
        printf("\nA divisão entre %d e %d é igual a %d", num1, num2, total2);
    }
    if (caractere == '+'){
        printf("\nA soma entre %d e %d é igual a %d", num1, num2, total3);
    }
    if (caractere == '-'){
        printf("\nA subtração entre %d e %d é igual a %d", num1, num2, total4);
    }
    return 0;
}