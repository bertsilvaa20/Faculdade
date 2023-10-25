// Questão 6. Faça um programa que leia a idade de uma pessoa expressa em dias e mostre-a expressa em anos, meses e dias.
// valor aproximado de meses em um ano: 30,417
// valor aproximado de dias em um ano: 365.2425

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    int diasidade,anos,dias,meses;

    printf("Digite sua idade em dias: ");
    scanf("%d", &diasidade);

    anos = diasidade / 365.2425;
    diasidade = fmod(diasidade,365.2425);

    meses = diasidade / 30.417;
    diasidade = fmod(diasidade,30.417);

    dias = diasidade;

    printf("Sua idade eh de:\n\nAnos:%d\nMeses:%d\nDias:%d", anos, meses,dias);

    return 0;
}
