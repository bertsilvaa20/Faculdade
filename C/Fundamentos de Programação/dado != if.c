#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int resultadoDado;
    printf("Quanto deu o resultado do dado?:.. \n");
    scanf("%d", &resultadoDado);
    
    if(resultadoDado == 10){
        printf("Você venceu o jogo!!! Parabéns!!! \n");
        printf("Experimente jogar de novo para ganhar mais prêmios :) \n");
    }
    if(resultadoDado != 10){
        printf("Você perdeu o jogo :( \n");
        printf("Tente novamente! \n");
    }
    return 0;
}
