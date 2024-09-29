#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int i, n1,n2, soma;

    for(i=0;i<3;i++){
        printf("Digite um número: ");
        scanf("%d", &n1);
        printf("Digite outro número: ");
        scanf("%d", &n2);
        soma=n1+n2;

        printf("O resultado da soma = %d\n", soma);
    }


    return 0;
}