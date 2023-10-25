// Questão 4. Lê dois números e mostra a soma. Ante do resultado, deverá aparecer a mensagem: SOMA

int main(){
    float num1, num2, soma;

    printf("Digite dois numeros: ");
    scanf("%f %f", &num1, &num2);

    soma = num1 + num2;

    printf("**SOMA**\n\n");
    printf("A soma de %.2f com %.2f equivale a: %.2f", num1, num2, soma);

    return 0;

}