#include <stdio.h>
#include <locale.h>

#define tam 10

int main(){
    setlocale(LC_ALL,  "");
    int vet[tam];
    int i, men, mai=0;

    printf("Digite %d números: ", tam);
    for(i=0;i<tam;i++){
        scanf("%d", &vet[i]);
        men = vet[i];
    }

    for(i=0;i<tam;i++){
        if(vet[i]> mai){
            mai =vet[i];
        }
        if(vet[i]<men){
            men=vet[i];
        }
    }
    printf("Maior = %d\nMenor = %d", mai, men);
}
