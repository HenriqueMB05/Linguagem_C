#include <stdio.h>
#include <locale.h>

int ver(int vet[], int n){
    for(int i=0;i<10;i++){
        if(n==vet[i]){
            return 1;
        }
    }
    return 0;
}


int main(){
    setlocale(LC_ALL, "");
    int n, vet[10];

    printf("Digite os números do vetor:\n");
    for(int i=0;i<10;i++){
        scanf("%d", &vet[i]);
    }
    printf("Digite um número para verificar se ele está presente no vetor: ");
    scanf("%d", &n);

    if(ver(vet, n)==1){
        printf("O número %d está presente no vetor!", n);
    } else{
        printf("O número %d não está presente no vetor!", n);
    }

    return 0;
}