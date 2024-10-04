#include <stdio.h>

int main(){
    int mat[4][4];

    printf("Digite os elementos da matriz: ");
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            scanf("%d", &mat[i][j]);
        }
    }
    printf("\nMatriz\n");
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("[%d]", mat[i][j]);
        }
        printf("\n");
    }

    printf("Diagonal principal da matiz:\n");
    for(int i=0;i<4;i++){
        printf("[%d] ", mat[i][i]);
    }

    return 0;
}