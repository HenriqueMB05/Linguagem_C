#include <stdio.h>

int main(){
    int soma=0, i=1;

    do{
        soma+=i;
        i++;
    }while(i!=11);

    printf("Resultado da soma = %d", soma);
    
    return 0;
}