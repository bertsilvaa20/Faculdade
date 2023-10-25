#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int Num = 0;

    printf("Digite um numero:");
    scanf("%d", &Num);

    if(Num % 10 == 0){
        printf("%d é divisivel por 10.\n", Num);
    }
    else if(Num % 5 == 0){
        printf("%d é divisivel por 5.\n", Num);
    }
    else if(Num % 2 == 0){
        printf("%d é divisivel por 2.\n", Num);
    }
    else
    {
        printf("%d não é divisivel nem por 10, nem por 5 e nem por 2.\n", Num);
    }

    return 0;
}