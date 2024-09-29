#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int n1, n2, soma;

    printf("Digite um número: ");
    scanf("%d", &n1);

    printf("Digite outro número: ");
    scanf("%d", &n2);

    soma=n1+n2;

    printf("Resultado da soma= %d", soma);

    return 0;
}