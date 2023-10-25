#include <stdio.h>
#include <stdlib.h>

int main(){
    int dado;
    
    printf("Diga um número entre 1 e 2:.. \n");
    scanf("%d", &dado);
    
    if(dado == 1 || dado == 2){
        printf("Valor correto! \n");
    }
    if(!(dado == 1 || dado == 2)){
        printf("Valor incorretissimo irmão! Insira um valor correto!");
    }
    return 0;
}
