#include <stdio.h>

int main(){
    char letra;

    printf("Digite uma letra: ");
    scanf("%c", &letra);

    //converter para minuscula
    if(letra >= 'A'&& letra <= 'Z'){
        letra+=32;
    }

    switch (letra){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("vogal");
        break;
    
    default:
        if(letra>='a'&& letra<='z'){
            printf("Consoante");
        } else{
            printf("Caracter inválido");
        }
        break;
    }
    
    return 0;
}