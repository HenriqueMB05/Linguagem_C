#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int n1, n2, menu, op;

    printf("Digite dois números: ");
    scanf("%d%d", &n1, &n2);

    printf("Operações: \n(1) soma\n(2) subtração\n>>> ");
    scanf("%d", &menu);

    switch (menu){
    case 1:
        op= n1+n2;
        printf("O resultado da soma = %d", op);
        break;
    case 2:
        op= n1-n2;
        printf("O resultado da subtração = %d", op);
        break;
    default:
    printf("Operação inválida");
        break;
    }
}