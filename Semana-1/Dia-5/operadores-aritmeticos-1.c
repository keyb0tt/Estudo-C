#include <stdio.h>

int main(){
    int n1;
    int n2;

    printf("Digite o primeiro numero:");
    scanf("%d", &n1);
    printf("Digite o segundo numero:");
    scanf("%d", &n2);

    int soma = n1 + n2;
    int subtracao = n1 - n2;
    int multiplicacao = n1 * n2;
    int divisao = n1 / n2;

    printf("A soma dos numeros e igual a: %d\n", soma);
    printf("A subtracao dos numeros e igual a: %d\n", subtracao);
    printf("A multiplicacao dos numeros e igual a: %d\n", multiplicacao);
    printf("A divisao dos numeros e igual a: %d\n", divisao);

    return 0;
}