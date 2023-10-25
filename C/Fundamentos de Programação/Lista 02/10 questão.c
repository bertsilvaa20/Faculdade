#include <stdlib.h>
#include <stdio.h>

int main(){
    float salario, inss1, inss2, inss3, inss4;
    
    printf("Insira seu salário:..");
    scanf("%f", &salario);
    
    inss1 = salario;
    inss2 = salario * 0.2;
    inss3 = salario * 0.25;
    inss4 = salario * 0.30;
    
    if (salario <= 600){
        
        printf("Você está isento do desconto do INSS!");
    }    
    
    if (salario >= 600 && salario <= 1200){
        printf ("Seu desconto do INSS será de: %.2f", inss2);
    }
    
    if (salario >= 1200 && salario <= 2000){
        printf("Seu salário com desconto do INSS é: %.2f", inss3);
    }
    
    if (salario > 2000){
        printf("Seu salário com desconto do INSS é: %.2f", inss4);
    }
    
    return 0;
}