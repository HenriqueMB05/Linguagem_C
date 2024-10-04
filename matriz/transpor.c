#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");

    int mat[2][2];

    printf("Digite os valores da matriz: ");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nMatriz Padrão: \n");
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
           printf("[%d]", mat[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz Transposta: \n");
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
           printf("[%d]", mat[j][i]);
        }
        printf("\n");
    }
    return 0;
}