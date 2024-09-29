#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    char sexo;
    
    printf("Digite um sexo [F/M]: ");
    scanf("%c", &sexo);

    switch(sexo){
        case 'M':
        case 'm':
            printf("Masculino");
            break;
        case 'F':
        case 'f':
            printf("Feminino");
            break;
        default:
            printf("Valor inválido!");
    }
    return 0;
}