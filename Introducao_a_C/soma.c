#include <stdio.h>

int main(){
    int num1, num2, num3, soma;

    printf("Digite tres numeros: ");
    scanf("%d%d%d", &num1,&num2,&num3);

    soma = num1 + num2 + num3;

    printf("A soma dos tres numeros = %d", soma);

    return 0;
}