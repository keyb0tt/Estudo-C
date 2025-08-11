#include <stdio.h>

int main(){
    float nota;

    printf("<------Classificacao de Notas----->\n");
    printf("Digite sua nota:\n");
    scanf("%f", &nota);

    if(nota >= 9)
        printf("Voce tirou nota A\n");
    else if(nota >= 7)
        printf("Voce tirou nota B\n");
    else if(nota >= 5)
        printf("Voce tirou nota C\n");
    else if(nota < 5)
        printf("Voce tirou nota D\n");
    
    printf("<---------FIM DO PROGRAMA--------->");

    return 0;
}