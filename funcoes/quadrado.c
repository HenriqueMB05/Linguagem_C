#include <stdio.h>
#include <math.h>
#include <locale.h>

int quad(int a){
    return a*a;
}

int main(){
    setlocale(LC_ALL, "");
    int num, result;

    printf("Digite um n�mero: ");
    scanf("%d", &num);
    
    result = quad(num);

    printf("O quadrado do n�mero %d � %d", num, result);

    return 0;
}