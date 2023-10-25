#include <stdio.h>
#include <stdio.h>


int main(){
    int fatorial, n;
    
    printf("Insira um valor para o qual deseja calcular seu fatorial: ");
    scanf("%d", &n);

    for(fatorial = 1; n > 1; n = n - 1)
    fatorial = fatorial * n;

    printf("\nO fatorial desse número é de: %d", fatorial);
    return 0;
    
}