#include <stdio.h>
#include <locale.h>

int maior(int a, int b){
    if(a>b){
        return a;
    } else{
        return b;
    }
}

int main(){
    setlocale(LC_ALL, "");
    int a, b;

    printf("Digite dois números: ");
    scanf("%d%d", &a, &b);

    if(a==b){
        printf("Os dois números são iguais!");
    } else{
        printf("O maior número é: %d", maior(a,b));
    }

    return 0;
}