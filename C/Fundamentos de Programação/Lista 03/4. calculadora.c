#include <stdlib.h>
#include <stdio.h>

int main(){
    int a, b, operacao;
    
    printf("**********CALCULADORA**********\n\n");
    printf("Digite um número inteiro: ");
    scanf("%d", &a);
    
    printf("Digite um segundo número inteiro: ");
    scanf("%d", &b);
    
    printf("Qual operação você deseja realizar entre esses dois números? \n (1) Soma \n (2) Subtração \n (3) Multiplicação \n (4) Divisão\n\n");
    scanf("%d", &operacao);
    
    if (operacao == 1){
        printf("\nA soma de %d com %d equivale a: %d\n", a, b, a + b);
    }
    if (operacao == 2){
        printf("\nA subtração de %d por %d equivale a: %d\n", a, b, a - b);
    }
    if (operacao == 3){
        printf("\nA multiplicação de %d por %d equivale a: %d\n", a, b, a * b);
    }
    if (operacao == 4){
        printf("\nA divisão de %d por %d equivale a: %d\n", a, b, a / b);
    }
    if (!(operacao == 1 || operacao == 2 || operacao == 3 || operacao == 4)){;
        printf("\nNão há operação vinculada a este número! \n\nLembre-se! \n1 para soma, 2 para subtração, 3 para multiplicação e 4 para divisão!");
    }
    return 0;
}