#include <stdlib.h>
#include <stdio.h>

int main(){
    
    int num;
    
    printf("Caro usuário, insire o número que você deseja ver a tabuada!\n");
    scanf("%d", &num);
    
    printf("\n**TABUADA do %d**\n\n", num);
    
    printf("*%d x 1 = %d*\n\n", num, num * 1);
    printf("*%d x 2 = %d*\n\n", num, num * 2);
    printf("*%d x 3 = %d*\n\n", num, num * 3);
    printf("*%d x 4 = %d*\n\n", num, num * 4);
    printf("*%d x 5 = %d*\n\n", num, num * 5);
    printf("*%d x 6 = %d*\n\n", num, num * 6);
    printf("*%d x 7 = %d*\n\n", num, num * 7);
    printf("*%d x 8 = %d*\n\n", num, num * 8);
    printf("*%d x 9 = %d*\n\n", num, num * 9);
    printf("*%d x 10 = %d*\n\n", num, num * 10);
    
    return 0;
}