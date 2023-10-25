#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade;
    
    printf("**Lembrando que em nossa escolinha não temos turma para crianças menores de 4 anos e maiores que 10 anos!!!**\n");
    printf("Quantos anos a criança tem?..");
    scanf("%d", &idade);
    
    if (idade == 4 || idade == 5){
        printf("\n \nAchamos uma turma! A turma da criança será a *A*!");
    }
    if (idade >= 6 && idade <= 8){
        printf("\n \nAchamos uma turma! A turma da criança será a *B*!");
    }
    if (idade == 9 || idade == 10){
        printf("\n \nAchamos uma turma! A turma da criança será a *C*!");
    }
    if (idade < 4 || idade > 10){
        printf("\n \nNão conseguimos achar uma turma :(\n");
        printf("Na nossa escolinha não temos turmas para crianças menores de 4 anos e maiores que 10. :(");
    }
    return 0;
}