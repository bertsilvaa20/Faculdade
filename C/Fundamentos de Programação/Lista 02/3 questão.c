#include <stdlib.h>
#include <stdio.h>

int main(){
    int aescolha,precogato,precocao,precopapagaio,preconenhum;
    
    printf("Menu: \n 1. *Gato* \n 2. *Cachorro* \n 3. *Papagaio* \n 4. ou qualquer outro valor. *Nenhum* \n\n");
    printf("Qual animal você possui?:..");
    scanf("%d", &aescolha);
    
    precocao = 350 + 50;
    precopapagaio = 350 + 12;
    precogato = 350 + 30;
    preconenhum = 350 - 20;
    
    if (aescolha == 1){
        printf("O valor que voce ira pagar de condominio é %d", precogato);
    }
    if (aescolha == 2){
        printf("O valor que voce ira pagar de condominio é %d", precocao);
    }
    if (aescolha == 3){
        printf("O valor que voce ira pagar de condominio é %d", precopapagaio);
    }
    else{
        printf("O valor que voce ira pagar de condominio é %d", preconenhum);
    }
    
return 0;
}