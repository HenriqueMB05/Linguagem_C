#include <stdio.h>

void cpVet(int mat[4][4], int lin, int vetor[]){
    int i;
    for (i = 0; i < 4; i++){
        vetor[i] = mat[lin][i];
    }
}


void imprimirMat(int mat[4][4]){
    int i, j;

    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            printf("[%d]", mat[i][j]);
        }
        printf("\n");
    }
}


void imprimirVet(int vet[]){
    int i;

    for (i = 0; i < 4; i++){
        printf("[%d]", vet[i]);
    }
    printf("\n\n");
}


void main(){
    int mat[4][4];
    int vet[4];
    int lin;
    int i, j;

    printf("Digite os valores da matriz:\n");
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            printf(">>> ");
            scanf("%d", &mat[i][j]);
        }
    }

    do{
        printf("Escolha uma linha entre 0 e 3: ");
        scanf("%d", &lin);
        if (lin > 3 || lin < 0){
            printf("Indice invalido!\n");
        }
    } while (lin > 3 || lin < 0);

    cpVet(mat, lin, vet);

    printf("Imprimindo o Vetor:\n");
    imprimirVet(vet);

    printf("Imprimindo a Matriz:\n");
    imprimirMat(mat);
}