#include <stdio.h>
#include <locale.h>

#define TAM 2
int main(){
    setlocale(LC_ALL, "");
    int mat[TAM][TAM];
    int i,j;

    printf("Digite um número para alimentar a matriz: ");
    for(i=0;i<TAM;i++){
        for(j=0; j<TAM;j++){
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Matriz:\n");
    for(i=0;i<TAM;i++){
        for(j=0;j<TAM;j++){
            printf("[%d] ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}  