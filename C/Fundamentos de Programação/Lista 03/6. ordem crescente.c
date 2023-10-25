#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1, n2, n3;
    
    printf("Digite três números: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    
    if (n1 <= n2 && n2 <= n3){
    printf("\nA ordem crescente desses três números é a seguinte: %d, %d, %d.", n1, n2, n3);
}
    else if (n1 <= n3 && n3 <= n2){
    printf("\nA ordem crescente desses três números é a seguinte: %d, %d, %d.", n1, n3, n2);
    }
    else if (n2 <= n1 && n1 <= n3){
    printf("\nA ordem crescente desses três números é a seguinte: %d, %d, %d.", n2, n1, n3);
    }
    else if (n2 <= n3 && n3 <= n1){
    printf("\nA ordem crescente desses três números é a seguinte: %d, %d, %d.", n2, n3, n1);
    }
    else if (n3 <= n1 && n1 <= n2){
    printf("\nA ordem crescente desses três números é a seguinte: %d, %d, %d.", n3, n1, n2);
    }
    else if (n3 <= n2 && n2 <= n1){
    printf("\nA ordem crescente desses três números é a seguinte: %d, %d, %d.", n3, n2, n1);
    }
    return 0;
}
    