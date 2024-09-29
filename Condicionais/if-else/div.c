#include <stdio.h>

int main(){
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num%3==0 &&num%5==0){
        printf("O numero %d e divisivel por tres e cinco!", num);
    } else{
        printf("O numero %d nao e divisivel por tres e cinco", num);
    }

    return 0;
}