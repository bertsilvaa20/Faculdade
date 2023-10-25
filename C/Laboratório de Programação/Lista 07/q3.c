#include <stdio.h>
#include <string.h>

int main(){
    char input[21];
    int vogais = 0;

    
    printf("Digite uma string (máximo 20 caracteres): ");
    scanf("%20s", input);

    for (int i = 0; i < strlen(input); i++) {
        char caractere = tolower(input[i]);
        if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u') {
            vogais++;
        }
    }

    printf("O número de vogais na string é: %d\n", vogais);

    return 0;
}