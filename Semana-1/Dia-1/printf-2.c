#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    printf("Essa é a primeira frase do programa\n");
    printf("Essa é a segunda frase do programa\n");
    printf("Essa é a terceira frase do programa\n");
    
    return 0;
}