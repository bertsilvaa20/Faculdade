#include <stdlib.h>
#include <stdio.h>

int main(){
    
    for (int n = 2; n <=50; n++){
    int resto = n % 2;
    
    if (resto == 0){
    printf("%d ", n);
}
}
    printf("\n\nEsses são todos os números pares de 2 a 50!");
    return 0;
}