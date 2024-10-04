#include <stdio.h>
#include <locale.h>

int fat(int a){
    int aux=1;
    for(a;a>0;a--){
        aux *= a;
    }
    return aux;
}

int main(){
    setlocale(LC_ALL,"");
    int a;

    printf("Digite um número: ");
    scanf("%d", &a);

    printf("O fatorial de %d é %d", a, fat(a));
}