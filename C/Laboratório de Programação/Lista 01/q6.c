// Questão 6. Lê dois números e mostre os seguintes resultados: Dividendo, Divisor, Quociente, Resto (n1 % n2)

#include <stdlib.h>
#include <stdio.h>

int main(){
    int num1, num2, resto;

    printf("\nDigite dois numeros pra realizar a divisao: ");
    scanf("%d %d", &num1, &num2);

    resto = num1 % num2;

    printf("Dividendo: %d\nDivisor: %d\nQuociente: %d\nResto: %d", num1, num2, num1 / num2, resto);

    return 0;
}
