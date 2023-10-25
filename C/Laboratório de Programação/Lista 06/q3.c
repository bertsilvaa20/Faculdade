#include <stdio.h>
#include <stdlib.h>

int main(void){

    int i;
    int n;

    printf("Quantos valores desejas ler?: ");
    scanf("%d", &n);

    if (n <= 0){
        printf("O valor deve ser maior do que zero!!!");
        return 1;
    }

    float valores[n];

    for (i = 0; i < n; i++){
        printf("Digite o %d valor: ", i + 1);
        scanf("%f", &valores[i]);
    }

    float soma = 0;

    for (i = 0; i < n; i++){
        soma += valores[i];
    }

    float media = soma / n;

    printf("A media aritmetica entre esses %d numeros equivale a: %.2f", n, media);

    return 0;
}