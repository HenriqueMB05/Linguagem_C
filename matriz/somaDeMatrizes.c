#include <stdio.h>

int main(){
    int mat_1[3][3], mat_2[3][3], mat_3[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Digite o elemento [%d][%d] da matriz 1: ", i, j);
            scanf("%d", &mat_1[i][j]);
            printf("Digite o elemento [%d][%d] da matriz 2: ", i, j);
            scanf("%d", &mat_2[i][j]);
        }
    }
    printf("\nMatriz 1\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("[%d]", mat_1[i][j]);
            mat_3[i][j] = mat_1[i][j] + mat_2[i][j];
        }
        printf("\n");
    }

    printf("\nMatriz 2\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("[%d]", mat_2[i][j]);
        }
        printf("\n");
    }
    
    printf("\nMatriz 3\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("[%d]", mat_3[i][j]);
        }
        printf("\n");
    }

    return 0;
}