#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int n1, n2, op;
    float div;
    char sign;

    printf("Digite dois números: ");
    scanf("%d%d", &n1, &n2);
    getchar();
    printf("Digite uma operação [+, -, *, /]: ");
    scanf("%c", &sign);

    switch (sign){
    case '+':
        op = n1+n2;
        printf("Resultado da operacao = %d", op);
        break;
    case '-':
        op =n1-n2;
        printf("Resultado da operacao = %d", op);
        break;
    case '*':
        op = n1*n2;
        printf("Resultado da operacao = %d", op);
        break;
    case '/':
        div = (float) n1/n2;
        printf("Resultado da operacao = %.1f", div);
        break;
    default : printf("Valor inválido");
        break;
    }
    
    return 0;
}