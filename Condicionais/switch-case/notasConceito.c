#include <stdio.h>

int main(){
    int nota;

    printf("Digite a nota do aluno: ");
    scanf("%d", &nota);

    switch (nota){
        case 9:
        case 10:
            printf("Conceito A");
            break;
        case 7:
        case 8:
            printf("Conceito B");
            break;
        case 5:
        case 6:
            printf("Conceito C");
            break;
        case 3:
        case 4:
            printf("Conceito D");
            break;
        case 2:
        case 1:
        case 0:
            printf("Conceito F");
            break;
    default:
        printf("Nota inválida!");
        break;
    }

    return 0;
}