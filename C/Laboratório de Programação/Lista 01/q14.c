
#include <stdlib.h>
#include <stdio.h>

int main(){
    int horas, minutos, minutostotal;

    printf("\nDigite que horas sao agora (formato: horas minutos): ");
    scanf("%d %d", &horas, &minutos);

    minutostotal = (60 * horas) + minutos;

    printf("\n\nJa se passaram %d minutos desde o inicio do dia (00:00)", minutostotal);

    return 0;

}