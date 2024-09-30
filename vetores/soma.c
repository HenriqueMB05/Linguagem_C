#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int vet[5];
    int i, soma=0;


    printf("Digite 5 números: \n");
    for(i=0;i<5;i++){
        printf(">>> ");
        scanf("%d", &vet[i]);
        soma += vet[i];
    }

    printf("A soma dos valores: ");
    for(i=0;i<5;i++){
        printf("%d ", vet[i]);
        if(i<4){
            printf("+ ");
        }
    }

    printf("= %d", soma);

    return 0;
}
