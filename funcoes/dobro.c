#include <stdio.h>
#include <locale.h>

int dobro(int a){
    return a*2;
}


int main(){
    setlocale(LC_ALL, "");
    int a, result;

    printf("Digite um número: ");
    scanf("%d", &a);
    result =dobro(a);
    printf("O dobro do número %d é %d", a, result);
    
    return 0;
}