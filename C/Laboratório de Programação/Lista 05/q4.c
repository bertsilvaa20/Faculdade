// Questão 4. Uma determinada empresa armazena para cada funcionário (10 no total) uma ficha contendo o
//código, o número de horas trabalhadas e o seu no de dependentes.
//Considerando que:
//a. A empresa paga 12 reais por hora e 40 reais por dependentes.
//b. Sobre o salário são feitos descontos de 8,5% para o INSS e 5% para IR.
//Faça um programa para ler o código, número de horas trabalhadas e número de dependentes de
//cada funcionário. Após a leitura, escreva qual o código, os valores descontados para cada tipo de
//imposto e finalmente o salário líquido de cada um dos funcionários.

#include <stdlib.h>
#include <stdio.h>

int main(){
    int codigofun[10], dependentes[10];
    float numhoras[10];
    int i;
    float descontoinss[10], descontoir[10], descontototal[10];
    float salario[10], salariofinal[10], salariofinal2[10];

    for (i = 0; i < 10; i++){
        printf("\n");
        printf("Digite o codigo de funcionario: ");
        scanf("%d", &codigofun[i]);
        printf("Digite o numero de horas trabalhadas: ");
        scanf("%f", &numhoras[i]);
        printf("Digite a quantidade de dependentes: ");
        scanf("%d", &dependentes[i]);
    }


    for(i = 0; i < 10; i++){

    salario[i] = 12 * numhoras[i];

    salariofinal[i] = salario[i] + (40 * dependentes[i]);

    descontoinss[i] = salariofinal[i] * 0.085;
    descontoir[i] = salariofinal[i] * 0.050;
    descontototal[i] = descontoinss[i] + descontoir[i];
    salariofinal2[i] = salariofinal[i] - descontototal[i];
    
    printf("\n//////////////////////////////\n");
    printf("O codigo do funcionario %d eh: %d\n", i + 1, codigofun[i]);
    printf("O desconto de INSS eh: %.2f\n", descontoinss[i]);
    printf("O desconto do IR eh: %.2f\n", descontoir[i]);
    printf("Com isso, o salario liquido do funcionario %d eh: %.2f\n", i + 1, salariofinal2[i]);
    printf("\n\n"); 
    }


return 0;

}
