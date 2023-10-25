#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int num, i, resultado = 0;
    
    printf("Digite um número: ");
    scanf("%d", &num);
    
    for (i = 2; i <= num / 2; i++){
        if (num % i == 0){
            resultado++;
            break;
        }
    }
    
    if (resultado == 0){
        printf("O número %d é primo!", num);
    }
    else{
        printf("O número %d não é primo!", num);
    }

return 0;
    
}