#include <stdio.h>
#include <locale.h>

int media(int a, int b, int c){
    return(a+b+c)/3;
}

int main(){
    setlocale(LC_ALL, "");
    int a,b,c;
    printf("Digite tr�s n�meros: ");
    scanf("%d%d%d", &a,&b,&c);

    printf("A m�dia das notas %d, %d, %d � %d", a, b, c, media(a,b,c));

    return 0;
}