#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int mat[3][3];
    int cont=0, num;

    printf("Digite números para alimentar a matriz: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Digite um número para verificar se ele está presente na matriz: ");
    scanf("%d", &num);
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if(num == mat[i][j]){
                printf("Número encontrado!");
                cont =1;
                break;
            }
        }
    }
    if(cont==0){
        printf("Número não encontrado!");
    }

    return 0;
}