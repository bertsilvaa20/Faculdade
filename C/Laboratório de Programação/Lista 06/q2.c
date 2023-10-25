#include <stdio.h>
#include <stdlib.h>

int main(){
    float salario[5];
    int i;

    for (i = 0; i < 5; i++){
        printf("Digite o salario da pessoa %d:  ", i + 1);
        scanf("%f", &salario[i]);
    
    if (salario[i] < 1000.0){

        salario[i] *= 1.10;
        
    }
    }

    printf("Lista de salarios atualizada: \n\n");


    for (i = 0; i < 5; i++){

    printf("Pessoa %d: R$: %.2f\n", i + 1, salario[i]);

}
    return 0;

}