#include <stdio.h>

int main(){
    char letra;

    printf("Digite uma letra: ");
    scanf("%c", &letra);

    if(letra>64&&letra<91){
        printf("A letra %c e maiuscula!", letra);
    } else if(letra>96&&letra<123){
        printf("A letra %c e minusucla!", letra);
    } else{
        printf("O caracter %c nao e uma letra", letra);
    }

    return 0;
}