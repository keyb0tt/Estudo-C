#include <stdio.h>

int main(){
    int idade;

    printf("<-----VERIFICADOR DE MAIORIDADE----->\n");
    printf("Digite sua idade\n");
    scanf("%d", &idade);
    if(idade >= 18)
        printf("Voce e maior de idade!\n");
    else
        printf("Voce e menor de idade!\n");
    printf("<----------FIM DO PROGRAMA---------->\na");
    
    return 0;
}