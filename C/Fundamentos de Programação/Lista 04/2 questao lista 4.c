#include <stdlib.h>
#include <stdio.h>

int main(void){
    int i, n;
    
    printf("Digite um número: ");
    scanf("%d", &n);
    
    printf("\n");
    
    FILE *arq;
    arq = fopen("tabuadaa.txt", "w");
    
    for (i = 1; i<= 20; i++){
        fprintf(arq, "%d x %2d = %2d\n", n, i, (n*i));
    }
    fclose(arq);
    
    printf("O arquivo foi criado com sucesso!\n");
    return 0;
}
