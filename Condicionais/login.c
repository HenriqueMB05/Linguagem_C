#include <stdio.h>
#include <string.h>




int main(){
    char login[10], senha[10];

    printf("Digite a o login do usuario: ") ;
    scanf("%s", login);
    if(strcmp("admin", login)==0){
        printf("Digite a senha de %s: ", login);
        scanf("%s", senha);
        if(strcmp("1234", senha)==0){
            printf("Acesso permitido!");
        } else{
            printf("Acesso negado!");
        }
    } else{
        printf("Acesso negado!");
    }
    return 0;
}