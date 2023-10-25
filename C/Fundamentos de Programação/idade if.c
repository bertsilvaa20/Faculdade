#include <stdlib.h>
#include <stdio.h>

int main(){
    int idade;
    printf("Insira sua idade:.. \n");
    scanf("%d", &idade);
    
    if(idade >= 18){
        printf("Maior de idade! \n");
        printf("Você está autorizado a entrar! \n");
    }
    if(idade <= 17){
        printf("Menor de idade! \n");
        printf("Você não está autorizado a entrar! Entrada permitida apenas com seus RESPONSÁVEIS!! \n");
    }
    return 0;
}