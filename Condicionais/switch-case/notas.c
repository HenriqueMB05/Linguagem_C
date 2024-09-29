#include <stdio.h>

int main(){
    int nota;

    printf("Digite a nota do aluno: ");
    scanf("%d", &nota);

    switch (nota){
    case 7:
    case 8:
    case 9:
    case 10:
        printf("Aprovado \n");
        break;
    case 5:
    case 6:
        printf("Recuperacao\n");
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
        printf("Reprovado\n");
    
    default:
        printf("Nota inválida!");
        break;
    }


    return 0;
}