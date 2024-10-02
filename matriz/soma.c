#include <stdio.h>

#define tam 3

int main(){
    int mat[tam][tam];
    int soma=0, i,j;

    for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
            scanf("%d", &mat[i][j]);
            soma+= mat[i][j];
        }
    }

    printf("Resultado da soma = %d", soma);

    return 0;
}

