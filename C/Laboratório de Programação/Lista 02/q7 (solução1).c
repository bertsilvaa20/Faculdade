// Questão 7. Faça um programa que leia o número do funcionário, o número de horas trabalhadas mensais, o valor que recebe por hora e o número de filhos com idade
// menor de 14 anos. Calcular e escrever o salário deste funcionário, sendo que cada filho menor de 14 anos acrescenta 10% do salário.

#include <stdlib.h>
#include <stdio.h>

int main(){

    int numfun, numhorasmensais, numfilhos, numfilhosaumento;
    float valorhora, salario, salariofinal;

    printf("Diga o seu numero de funcionario: ");
    scanf("%d", &numfun);

    printf("Quantas horas trabalhadas mensais? ");
    scanf("%d", &numhorasmensais);

    printf("Qual o valor recebido por hora? ");
    scanf("%f", &valorhora);

    printf("Quantos filhos abaixo de 14 anos? ");
    scanf("%d", &numfilhos);

    salario = numhorasmensais * valorhora;
    numfilhosaumento = numfilhos * 0.10 * salario;
    salariofinal = salario + numfilhosaumento;

    printf("\nNumero do funcionario: %d\nHoras trabalhadas mensais: %d\nValor recebido por hora: %.2f\n Filhos abaixo de 14 anos: %d\n Salario base: %.2f", numfun, numhorasmensais, valorhora, numfilhos, salario);
    printf("\n\nCom o bonus de %d filhos abaixo de 14 anos o salario total fica: %.2f", numfilhos, salariofinal);

    return 0;

}
