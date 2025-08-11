#include <stdio.h>

int main(){
    int raio;

    printf("Digite o raio do circulo:\n");
    scanf("%d", &raio);

    float area = 3.14 * (raio * raio);

    printf("A area do seu circulo e de: %f", area);

    return 0;
}