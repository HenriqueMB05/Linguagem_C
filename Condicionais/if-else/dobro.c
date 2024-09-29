#include <stdio.h>
#include <locale.h>

int main(){
    int num, n2;

    printf("Digite um número: ");
    scanf("%d", &num);

    if(num>0){
        n2=num*2;
        printf("O dobro de %d é %d", num, n2);
    } else if(num<0){
        n2 =num*3;
        printf("O triplo de %d é %d", num, n2);
    } else{
        printf("O valor informado é 0");
    }

    return 0;
}