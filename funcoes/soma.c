#include <stdio.h>
#include <locale.h>

int soma(int a,int b){
    return a+b;
}

int main(){
    setlocale(LC_ALL, "");
    int a, b, valor;

    printf("Digite um n�mero: ");
    scanf("%d", &a);
    printf("Digite outro n�mero: ");
    scanf("%d", &b);

    valor =soma(a,b);

    printf("O valor da soma = %d", valor);
    return 0;
}