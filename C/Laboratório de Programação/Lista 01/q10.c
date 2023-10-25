// Questão 10. Lê o raio de um círculo e mostre como saída o perímetro (2*π*Raio) e a área (π*Raio²)

#include <stdlib.h>
#include <stdio.h>

int main(){
    float raio, perimetro, area;

    printf("Digite o raio de um determinado circulo: ");
    scanf("%f", &raio);

    perimetro = 2 * 3.14 * raio;
    area = (raio * raio) * 3.14;

    printf("O perimetro desse circulo de raio %.2f equivale a %.2f\n\nA area desse circulo equivale a %.2f", raio, perimetro, area);

    return 0;
}