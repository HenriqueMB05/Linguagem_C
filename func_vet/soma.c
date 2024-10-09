#include <stdio.h>
#include <locale.h>

int soma(int vet[]){
    int sum=0;
    for (int i = 0; i < 5; i++){
        sum += vet[i];
    }
    return sum;
}

int main(){
    setlocale(LC_ALL, "");
    int vet[5];

    printf("Digite os valores do vetor:\n");
    for(int i =0;i<5;i++){
        scanf("%d", &vet[i]);
    }

    printf("A soma dos valores do vetor é: %d", soma(vet));

    return 0;
}