#include <stdio.h>
#include <stdlib.h>

int main(){
    float media;
    
    printf("Qual foi sua média?:..");
    scanf("%f", &media);
    
    if (media >= 9.0){
        printf("Conceito A! Aprovado!");
    }
    if (media >= 7.5 && media < 9.0){
        printf("Conceito B! Aprovado!");
    }
    if (media >= 6.0 && media < 7.5){
        printf("Conceito C! Aprovado!");
    }
    if (media >= 4.0 && media < 6.0){
        printf("Conceito D! Reprovado! :(");
    }
    if (media < 4.0){
        printf("Conceito E! Reprovadissimo! :(");
    }
    return 0;
}