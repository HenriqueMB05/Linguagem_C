#include <stdio.h>
#include <locale.h>

int main(){
    int a, soma;

    printf("Digite um número: ");
    scanf("%d", &a);

    if(a%2==0){
        printf("O valor informado é par somar mais 5\n");
        soma =a+5;
    } else{
        printf("O valor informado é impar somar mais 8\n");
        soma=a+8;
    }

    printf("O de %d somado é %d", a, soma);
    return 0;
}