// Questão 3. Faça um programa que solicite ao usuário 10 números inteiros e, ao final, informe a quantidade
// de números ímpares e pares lidos. Calcule também a soma dos números pares e a média dos
// números ímpares.

#include <stdlib.h>
#include <stdio.h>

int main(){
    int num, i, par = 0, impar = 0, somapar = 0;
    float mediaimpar, somaimpares = 0;

    for (i = 0; i <= 10; i++){
        printf("Digite um numero inteiro: ");
        scanf("%d", &num);

    if (num % 2 == 0){
        par++;
        somapar += num;
    }

    else {
        impar++;
        somaimpares += num;
        mediaimpar = somaimpares / i; 
    }

    }

    printf("A quantidade de numeros pares eh: %d\n\n", par);
    printf("A quantidade de numeros impares eh: %d\n\n", impar);

    
    if(par > 0){
        printf("A soma entre os numeros pares eh: %d\n", somapar);
    }
    
    if(impar > 0){
        printf("A media entre os numeros impares eh: %.2f\n", mediaimpar);
    }

    return 0;
}