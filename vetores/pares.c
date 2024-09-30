#include <stdio.h>
#include <locale.h>

#define tam 7

int main(){
    setlocale(LC_ALL, "");

    int vet[tam];
    int i;

    printf("Digite %d número: \n", tam);
    for(i=0;i<tam;i++){
        scanf("%d", &vet[i]);
    }

    for(i=0;i<tam;i++){
        if(vet[i]%2==0){
            printf("[%d] ", vet[i]);
        }
    }

    return 0;
}
