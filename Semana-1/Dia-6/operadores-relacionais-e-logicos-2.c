#include <stdio.h>
#include <string.h>

int main(){
    int n1;
    char mensagemParImpar[50] = "Seu numero e impar";
    char mensagemMaiorQueDez[50] = "Seu numero e menor que dez";

    printf("Digite um numero: ");
    scanf("%d", &n1);

    if(n1 % 2 == 0)
        strcpy(mensagemParImpar, "Seu numero e par");
    if(n1 > 10)
        strcpy(mensagemMaiorQueDez, "Seu numero e maior que 10");
        
    printf("%s\n%s\n", mensagemMaiorQueDez, mensagemParImpar);
    return 0;
}