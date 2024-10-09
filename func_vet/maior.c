#include <stdio.h>
#include <locale.h>

int maior(int vet[]){
    int m=0;
    for(int i=0;i<10;i++){
        if(m<vet[i]) {
            m = vet[i];
        }
    }
    return m;
}

int main(){
    setlocale(LC_ALL,"");
    int vet[10];

    printf("Digite os valores do vetor:\n");
    for(int i=0;i<10;i++){
        scanf("%d", &vet[i]);
    }

    printf("O maior número do vetor é: %d", maior(vet));
    return 0;
}