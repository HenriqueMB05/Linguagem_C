#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int i=0, n1, n2, soma;

    while(i!=3){
        printf("Digite um número: ");
        scanf("%d", &n1);
        printf("Digite outro número: ");
        scanf("%d", &n2);
        
        soma= n1+n2;
        printf("O Resultado da soma = %d\n", soma);
        
        i++;
    }

    return 0;
}