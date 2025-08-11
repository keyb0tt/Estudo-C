#include <stdio.h>

int main(){
    char nome[20];
    int idade;

    printf("Insira seu nome\n");
    scanf("%s", &nome);
    printf("Insira sua idade\n");
    scanf("%d", &idade);

    printf("Seu nome e %s e voce tem %d anos", nome, idade);

    return 0;
}