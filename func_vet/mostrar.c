#include <stdio.h>
#include <locale.h>

void mostrar(int vet[]){
    printf("Vetor:\n");
    for(int i =0;i<5;i++){
        printf("[%d] ", vet[i]);
    }
}


int main(){
    setlocale(LC_ALL, "");
    int vet[5];

    printf("Digite os números do vetor:\n");
    for(int i=0;i<5;i++){
        scanf("%d", &vet[i]);
    }
    mostrar(vet);
    
    return 0;
}