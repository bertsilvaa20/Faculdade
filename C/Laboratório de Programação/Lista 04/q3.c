// Questão 3. A Secretaria de Meio Ambiente, que controla o índice de poluição, mantém 3 grupos de indústrias
// que são altamente poluentes do meio ambiente. O índice de poluição aceitável varia de 0,05 até 0,29.
// Se o índice sobe para 0,3 as indústrias do 1o grupo são intimadas a suspenderem suas atividades, se o
// índice crescer para 0,4 as industrias do 1o e 2o grupo são intimadas a suspenderem suas atividades, se
// o índice atingir 0,5 todos os grupos devem ser notificados a paralisarem suas atividades. Faça um
// programa que leia o índice de poluição.

#include <stdlib.h>
#include <stdio.h>

int main(){
    float pol;

    printf("Digite o indice de poluicao: ");
    scanf("%f", &pol);

    if (pol >= 0.05 && pol <= 0.29){
        printf("Nivel de poluicao aceitavel!");
    
    }
    else if (pol >= 0.3 && pol < 0.4){
        printf("Industrias do 1 grupo foram intimadas a suspenderem suas atividades!");
    }

    else if (pol >= 0.4 && pol < 0.5){
        printf("Industrias do 1 e 2 grupo foram intimadas a suspenderem suas atividades!");
    }

    else if (pol >= 0.5){
        printf("Todos os grupos foram notificados para paralisarem suas atividades!");
    }
    else{
        printf("O nivel de poluicao eh invalido!");
    }

return 0;
}