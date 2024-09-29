#include <stdio.h>

int main(){
    int idade;
    printf("Qual sua idade: ");
    scanf("%d", &idade);

    if(idade>=18){
        printf("Voce e maior de idade!\nVoce pode entrar");
    } else{
        printf("Menores de idade nao sao permitidos!");
    }
    
    
    return 0;
}