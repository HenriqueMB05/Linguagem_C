#include <stdio.h>
#include <locale.h>

void mostrar(int vet[]){
    printf("Vetor Padrão:\n");
    for (int i = 0; i < 6; i++){
        printf("[%d] ", vet[i]);
    }
    printf("\nVetor Invertido:\n");
    for (int i = 5; i >= 0; i--){
        printf("[%d] ", vet[i]);
    }
}

int main(){
    setlocale(LC_ALL, "");
    int vet[6];

    printf("Digite os números do vetor:\n");
    for (int i = 0; i < 6; i++){
        scanf("%d", &vet[i]);
    }
    mostrar(vet);

    return 0;
}