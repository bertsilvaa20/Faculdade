#include <stdlib.h>
#include <stdio.h>

int main(void){
    int a, b, soma = 0;
    
    printf("Informe o primeiro número: ");
    scanf("%d", &a);
    
    printf("Informe o segundo número: ");
    scanf("%d", &b);
    
    for (int i = a + 1; i < b; i++){
        int flag = 1;
        for (int j = 2; j < i; j++){
            if (i % j == 0){
                flag = 0;
            }
        }
        
    if (flag){
        printf("%i é primo\n", i);
        soma = soma + i;
      }
    }
    
    printf("Soma: %d", soma);
    
    return 0;
}