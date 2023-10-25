// Questão 6. Ler um número inteiro, e verificar se o número corresponde a um mês válido no calendário e escrever o nome do mês
// , senão escrever uma mensagem ‘Mês Inválido’.

#include <stdlib.h>
#include <stdio.h>

int main(){
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if(num == 1){
        printf("\nEsse numero equivale ao mes de Janeiro!");
    }
    else if (num == 2){
        printf("\nEsse numero equivale ao mes de Fevereiro!");
    }
    else if (num == 3){
        printf("\nEsse numero equivale ao mes de Marco!");
    }
    else if (num == 4){
        printf("\nEsse numero equivale ao mes de Abril!");
    }
    else if (num == 5){
        printf("\nEsse numero equivale ao mes de Maio!");
    }
    else if (num == 6){
        printf("\nEsse numero equivale ao mes de Junho!");
    }
    else if (num == 7){
        printf("\nEsse numero equivale ao mes de Julho!");
    }
    else if (num == 8){
        printf("\nEsse numero equivale ao mes de Agosto!");
    }
    else if (num == 9){
        printf("\nEsse numero equivale ao mes de Setembro!");
    }
    else if (num == 10){
        printf("\nEsse numero equivale ao mes de Outubro!");
    }
    else if (num == 11){
        printf("\nEsse numero equivale ao mes de Novembro!");
    }
    else if (num == 12){
        printf("\nEsse numero equivale ao mes de Dezembro!");
    }
    else{
        printf("\nEsse numero nao equivale a nenhum mes!");
    }

    return 0;

}

