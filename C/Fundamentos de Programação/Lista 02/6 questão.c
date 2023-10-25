#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    char sexo;
    int peso;
    float altura, imc, quadrado;

    printf("\nQual seu sexo?:.. [M/F]\n");
    scanf("%c", &sexo);
    
    printf("Insira seu peso:..");
    scanf("%d", &peso);

    printf("\nInsira sua altura:..");
    scanf("%f", &altura);

    quadrado = altura * altura;
    imc = peso / quadrado;

    if (sexo == 'm' || sexo == 'M'){
        
    if (imc < 19.1){
        printf("\nVocê está abaixo do peso! Seu IMC é de: %.2f", imc);
    }
    if (imc >= 19.1 && imc < 25.8){
        printf("\nVocê está com o peso ideal! Seu IMC é de: %.2f", imc);
    }
    if (imc >= 25.8 && imc < 27.3){
        printf("\nVocê está ligeiramente acima do peso! Seu IMC é de: %.2f", imc);
    }
    if (imc >= 27.3 && imc < 32.3){
        printf("\nVocê está bastante acima do peso! Seu IMC é de: %.2f", imc);
    }
    if (imc >= 32){
        printf("\nVocê está em condição obesa! Seu IMC é de: %.2f", imc);
    }
    }
    if (sexo == 'f' || sexo == 'F'){
        if (imc < 20.7){
        printf("\nVocê está abaixo do peso! Seu IMC é de: %.2f", imc);
    }
    if (imc >= 20.7 && imc < 26.4){
        printf("\nVocê está com o peso ideal! Seu IMC é de: %.2f", imc);
    }
    if (imc >= 26.4 && imc < 27.8){
        printf("\nVocê está ligeiramente acima do peso! Seu IMC é de: %.2f", imc);
    }
    if (imc >= 27.8 && imc < 31.1){
        printf("\nVocê está bastante acima do peso! Seu IMC é de: %.2f", imc);
    }
    if (imc >= 31.1){
        printf("\nVocê está em condição obesa! Seu IMC é de: %.2f", imc);
    }
    
    }
    return 0;
}