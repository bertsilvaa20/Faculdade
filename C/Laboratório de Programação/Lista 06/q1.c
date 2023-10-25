#include <stdio.h>
#include <stdlib.h>

int main(){
    float salario[10], maiorsalario;
    int i;

    for (i = 0; i < 10; i++){

        printf("Digite um salario: ");
        scanf("%f", &salario[i]);
    }

    for (i = 0; i < 10; i++){

    if (salario[i] > maiorsalario){
        maiorsalario = salario[i];
    }

    }

    printf("O maior salario equivale a: %.3f", maiorsalario);

    return 0;
}