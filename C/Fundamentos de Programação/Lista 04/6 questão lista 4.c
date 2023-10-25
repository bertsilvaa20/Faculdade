#include <stdlib.h>
#include <stdio.h>

int main(void){
    int x[5] = {};
    int soma = 0;
    
    for(int i = 0; i < 5; i++){
        printf("\nDigite uma sequência de 5 números: ");
        scanf("%d", &x[i]);
    }
    
    for(int i = 0; i < 5; i++){
        soma = soma + x[i];
    }
    
    printf("\nO resultado da soma de todos os números desse array é: %d", soma);
    return 0;
    
}