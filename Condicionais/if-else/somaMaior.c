#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int a,b,c, soma;

    printf("Digite três números: ");
    scanf("%d%d%d", &a,&b,&c);

    soma = a+b;

    if(soma>c){
        printf("%d + %d é maior que %d", a, b,c);
    } else if(soma<c){
        printf("%d + %d é menor que %d", a, b,c);
    } else{
        printf("%d + %d é igual a %d", a, b,c);
    }

    return 0;
}