#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    
    printf("Digite um número inteiro entre 1 e 12:..\n");
    scanf("%d", &num);
    
    if (num == 1){
        printf("O número que você digitou: %d \nÉ equivalente ao mês de Janeiro!", num);
    }
    if (num == 2){
        printf("O número que você digitou: %d \nÉ equivalente ao mês de Fevereiro!", num);
    }
    if (num == 3){
        printf("O número que você digitou: %d \nÉ equivalente ao mês de Março!", num);
    }
    if (num == 4){
        printf("O número que você digitou: %d \nÉ equivalente ao mês de Abril!", num);
    }
    if (num == 5){
        printf("O número que você digitou: %d \nÉ equivalente ao mês de Maio!", num);
    }
    if (num == 6){
        printf("O número que você digitou: %d \nÉ equivalente ao mês de Junho!", num);
    }
    if (num == 7){
        printf("O número que você digitou: %d \nÉ equivalente ao mês de Julho!", num);
    }
    if (num == 8){
        printf("O número que você digitou: %d \nÉ equivalente ao mês de Agosto!", num);
    }
    if (num == 9){
        printf("O número que você digitou: %d \nÉ equivalente ao mês de Setembro!", num);
    }
    if (num == 10){
        printf("O número que você digitou: %d \nÉ equivalente ao mês de Outubro!", num);
    }
    if (num == 11){
        printf("O número que você digitou: %d \nÉ equivalente ao mês de Novembro!", num);
    }
    if (num == 12){
        printf("O número que você digitou: %d \nÉ equivalente ao mês de Dezembro!", num);
    }
    
    if (!(num >= 1 && num <= 12)){
        printf("Não existe um mês referente ao número %d!", num);
    }
    
    return 0;
}