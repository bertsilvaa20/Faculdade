#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a,b;
    
    printf("Digite dois números inteiros:");
    scanf("%d %d",&a, &b);
    
    
    printf("A potência de %d elevado a %d equivale a %.f", a, b, pow(a,b));
}
