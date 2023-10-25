// Questão 2. Desenvolva um algoritmo que efetue a leitura de três valores para os lados de um triângulo, 
// considerando lados como: A, B e C. O algoritmo deverá verificar se os lados fornecidos forma
// realmente um triângulo (cada lado é menor que a soma dos outros dois lados). Se for esta condição
// verdadeira, deverá ser indicado qual tipo de triângulo foi formado: isósceles (dois lados iguais e um
// diferente), escaleno (todos os lados diferentes) ou eqüilátero (todos os lados são iguais).

#include <stdlib.h>
#include <stdlib.h>

int main(){
    int ladoA = 0, ladoB = 0, ladoC = 0;

    printf("Digite os valores do lado A, B e C: ");
    scanf("%d %d %d", &ladoA, &ladoB, &ladoC);

    if(ladoA < ladoB + ladoC && ladoB < ladoA + ladoC && ladoC < ladoA + ladoB){
        printf("Eh um triangulo!\n\n");
    }
    else {
        printf("Nao eh um triangulo!");
        return 0;
    }

    if(ladoA == ladoB && ladoC != ladoA && ladoC != ladoB || ladoB == ladoC && ladoA != ladoB && ladoA != ladoC || ladoC == ladoA && ladoB != ladoA && ladoB != ladoC){
        printf("Isosceles!");
    }
    if(ladoA != ladoB && ladoB != ladoC && ladoA != ladoC){
        printf("Escaleno!");
    }
    if(ladoA == ladoB && ladoB == ladoC && ladoA == ladoC){
        printf("Equilatero!");
    }


 return 0;

}


