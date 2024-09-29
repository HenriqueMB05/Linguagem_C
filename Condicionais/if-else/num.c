#include <stdio.h>
#include <locale.h>

int main(){
    int a, b,c;

    printf("Digite dos números: ");
    scanf("%d%d", &a,&b);

    if(a==b){
        c =a+b;
    } else{
        c = a*b;
    }

    printf("%d", c);

    return 0;
}