// Questão 1. 1) Faça um programa que leia a idade de uma pessoa expressa em anos, meses e dias e mostre-a expressa apenas em dias.
// anos para dias (365.2425 * anos)
// meses para dias (30.436875 * meses)


#include <stdio.h>
#include <stdlib.h>

int main(){
    int anos,meses,dias,diastotal;

    printf("Digite sua idade (formato: anos meses dias)");
    scanf("%d %d %d", &anos, &meses, &dias);


diastotal = (365.2425 * anos) + (30.436875 * meses) + dias;

printf("Voce possui %d dias de vida!", diastotal);

return 0;

}

