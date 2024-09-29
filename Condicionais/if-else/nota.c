#include <stdio.h>

int main(){
    float nota;

    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);

    if(nota>=9){
        printf("%.1f -> A", nota);
    } else if(nota>=8 && nota<9){
        printf("%.1f -> B", nota);
    } else if(nota>=7 &&nota<8){
        printf("%.1f -> C", nota);
    } else if(nota>=6 &&nota<7){
        printf("%.1f -> D", nota);
    } else{
        printf("%.1f -> F", nota);
    }

    return 0;
}