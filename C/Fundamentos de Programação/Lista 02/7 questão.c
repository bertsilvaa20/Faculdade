#include <stdio.h>
#include <stdlib.h>

int main(){
    char cargo;
    float salario;
    
    printf("Qual seu cargo dentro da empresa? (t: Técnico,g: Gerente,d: Demais):  ");
    scanf("%c", &cargo);
    
    printf("Insira seu salário:..");
    scanf("%f", &salario);

    if (cargo == 't' || cargo == 'T'){
        salario = salario * 1.50;
        printf("\nSeu cargo é Técnico.");
        printf("\nSeu salario com aumento é de: %.2f", salario);
    }
    if (cargo == 'g' || cargo == 'G'){
        salario = salario * 1.30;
        printf("\nSeu cargo é Gerente.");
        printf("\nSeu salario com aumento é de: %.2f", salario);
    }
    if (cargo == 'd' || cargo == 'D'){
        salario = salario * 1.20;
        printf("\nSeu cargo é Outros.");
        printf("\nSeu salario com aumento é de: %.2f", salario);
    }
    return 0;
}