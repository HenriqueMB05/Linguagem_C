#include <stdio.h>
#include <locale.h>

#define tam 8

int main(){
    setlocale(LC_ALL, "");
    float vet[tam];
    int i;
    float soma=0;


    printf("Digite %d números: \n",  tam);
    for(i=0;i<tam;i++){
        printf(">>> ");
        scanf("%f", &vet[i]);
        soma += vet[i];
    }

    printf("A soma dos valores: (");
    for(i=0;i<tam;i++){
        printf("%.1f ", vet[i]);
        if(i<tam-1){
            printf("+ ");
        }
    }

    printf(")/ %d = %.1f", tam, soma/tam);

    return 0;
}
