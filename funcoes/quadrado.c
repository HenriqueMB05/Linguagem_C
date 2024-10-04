#include <stdio.h>
#include <math.h>
#include <locale.h>

int quad(int a){
    return a*a;
}

int main(){
    setlocale(LC_ALL, "");
    int num, result;

    printf("Digite um número: ");
    scanf("%d", &num);
    
    result = quad(num);

    printf("O quadrado do número %d é %d", num, result);

    return 0;
}