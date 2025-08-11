#include <stdio.h>

int main(){
    int n1;

    printf("Digite um numero: ");
    scanf("%d", &n1);

    if (n1 > 0)
        printf("O seu numero e positivo!");
    else 
        printf("O seu numero e negativo!");
        
    return 0;
}