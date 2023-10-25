// Questão 3. Lê um número e mostra seu sucessor e seu antecessor na tela.

#include <stdlib.h>
#include <stdio.h>

int main(){
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    printf("\nO sucessor de %d eh: %d.\n\nO antecessor de %d eh: %d.", num, num + 1, num, num - 1);
    printf("\n\nCom isso, a ordem eh a seguinte: %d - %d - %d", num - 1, num, num + 1 );

return 0;

}