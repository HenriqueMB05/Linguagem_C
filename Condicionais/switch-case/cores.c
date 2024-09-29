#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    switch (num){
    case 1:
        printf("Vermelho");
        break;
    case 2:
        printf("Verde");
        break;
    case 3:
        printf("Azul");
        break;
    default:
        printf("Valor inválido");
        break;
    }
}