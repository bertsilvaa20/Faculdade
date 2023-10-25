// •Faça um programa que solicite ao usuário para digitar valores numéricos inteiros positivos. Encerre a entrada de dados quando for digitado 
// a palavra S para sair. –Calcule a média dos números positivos digitados. –Informe quantos valores foram digitados.
// –Informe qual foi o maior valor. –Informe qual foi o menor valor.

#include <stdlib.h>
#include <stdio.h>

int main(){
    int valor;
    int soma = 0;
    int i = 0;
    int maior,menor;
    char entrada[20];

    printf("Digite um valor inteiro (ou digite a tecla 'S' para sair) ");
    scanf("%s", &entrada);

    if (entrada[0] == 'S' || entrada[0] == 's'){
        printf("Encerrando programa...\n\n");
        return 0;
    }


    valor = atoi(entrada);
    maior = menor = valor;

    while (1){
        soma += valor;
        i++;

        if (valor > maior){
            maior = valor;
        }
        if (valor < menor){
            menor = valor;
        }

        printf("Digite outro valor inteiro (ou digite a tecla 'S' para sair) ");
        scanf("%s", &entrada);

        if (entrada[0] == 'S' || entrada[0] == 's'){
            printf("Encerrando programa...\n\n");
            break;
        }

        valor = atoi(entrada);
    }

    if (i > 0){
        float media = soma / i;
        printf("A media entre esses valores eh de: %.2f\n", media);
        printf("A quantidade de valores digitados foi de: %d\n", i);
        printf("O menor dos valores equivale a: %d\n", menor);
        printf("O maior dos valores equivale a: %d\n", maior);
    }
        else{
            printf("Nenhum valor foi digitado, encerrando o programa...");
        }

        return 0;
    }

