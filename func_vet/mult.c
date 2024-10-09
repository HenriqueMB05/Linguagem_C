#include <stdio.h>
#include <locale.h>

#define n 5

void mult(int vet[], int num){
    int vetor[5];

    printf("Vetor Padrão:\n");
    for(int i=0;i<5;i++){
        printf("[%d] ", vet[i]);
    }
    
    printf("\nVetor Multiplicado:\n");
    for(int i=0;i<5;i++){
        vetor[i]= vet[i]*num;
        printf("[%d] ", vetor[i]);
    }
}

int main(){
    setlocale(LC_ALL, "");
    int vet[5];

    printf("Digite os números do vetor:\n");
    for(int i=0;i<5;i++){
        scanf("%d", &vet[i]);
    }

    mult(vet, n);

    return 0;
}