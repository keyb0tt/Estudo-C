#include <stdio.h>

int main(){
    int n1;
    int n2;
    float resultado;
    int operador;

    printf("<---------CALCULADORA--------->\n");
    printf("Digite o primeiro numero:\n");
    scanf("%d", &n1);
    printf("Digite o segundo numero:\n");
    scanf("%d", &n2);
    printf("<---------OPERADORES---------->\n");
    printf("Multiplicacao: 1\n");
    printf("Divisao: 2\n");
    printf("Adicao: 3\n");
    printf("Subtracao: 4\n");
    printf("<----------------------------->\n");
    scanf("%d", &operador);

    if(operador == 1)
        resultado = n1 * n2;
    if(operador == 2)
        resultado = n1 / n2;
    if(operador == 3)
        resultado = n1 + n2;
    if(operador == 4)
        resultado = n1 - n2;

    printf("O resultado e: %.2f\n", resultado);


    

    return 0;
}