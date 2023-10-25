#include <stdio.h>

int main(){
    char apt;
    int diaria, dval;
    float valInt, dtot, subtot, totalgeral, taxserv;

    puts("digite qual apartamento você irá querer reservar: ");
    printf("A-150R$\nB-100R$\nC-75R$\nD-175R$\n");
    scanf("%c", &apt);
    puts("digite a quantidade de dias da reserva: ");
    scanf("%d", &diaria);
    puts("digite o valor de consumo interno do apartamento: ");
    scanf("%f", &valInt);

    if(apt == 'A' || apt == 'a'){
        dval = 150;
        dtot = diaria * dval;
    }
    if(apt == 'B' || apt == 'b'){
        dval = 100;
        dtot = diaria * dval;
    }
    if(apt == 'C' || apt == 'c'){
        dval = 75;
        dtot = diaria * dval;
    }
    if(apt == 'D' || apt == 'd'){
        dval = 175;
        dtot = diaria * dval;
    }
    subtot = dtot + valInt;
    taxserv = 0.1 * subtot;
    totalgeral = subtot + taxserv;

    printf("apartamento escolhido: %c\n", apt);
    printf("numero de diárias: %d dias\n", diaria);
    printf("valor unitário da diaria: %dR$\n", dval);
    printf("valor total da diaria: %.2fR$\n", dtot);
    printf("valor do consumo interno: %.2fR$\n", valInt);
    printf("subtotal: %.2fR$\n", subtot);
    printf("valor da taxa de serviço: %.2fR$\n", taxserv);
    printf("valor total: %.2fR$\n", totalgeral);

    return 0; 
}