#include <stdlib.h>
#include <stdio.h>

int main(){
    int A, B;
    float C;
    
    printf("Digite o valor de A:..");
    scanf("%d", &A);
    
    printf("Digite o valor de B:..");
    scanf("%d", &B);
    
    if (A == B){
        C = A + B;
        printf("O valor da soma é: %2.f", C);
    }
    else{
        C = A * B;
        printf("O valor da soma é: %2.f", C);
    }
    return 0;
}