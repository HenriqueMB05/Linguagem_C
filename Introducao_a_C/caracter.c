#include <stdio.h>

int main(){
    char caracter;

    printf("Digite um carecter: ");
    scanf("%c", &caracter);

    printf("O caracter [%c] em ASCII e [%d]", caracter, caracter);
    
    return 0;
}