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

    printf("Digite os n�meros do vetor:\n");
    for(int i=0;i<10;i++){
        scanf("%d", &vet[i]);
    }
    printf("Digite um n�mero para verificar se ele est� presente no vetor: ");
    scanf("%d", &n);

    if(ver(vet, n)==1){
        printf("O n�mero %d est� presente no vetor!", n);
    } else{
        printf("O n�mero %d n�o est� presente no vetor!", n);
    }

    return 0;
}