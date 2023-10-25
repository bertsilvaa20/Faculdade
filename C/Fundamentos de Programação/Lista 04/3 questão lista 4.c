#include <stdlib.h>
#include <stdio.h>

int main(void){
    int n, soma = 0;
    
    printf("Informe seu número: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++){
        if (i%2 == 0){
            printf("%i é par\n", i);
            soma = soma + i;
        }
    }
    
    printf("Soma = %i\n", soma);
    
    return 0;
}