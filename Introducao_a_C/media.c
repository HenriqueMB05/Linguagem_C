#include <stdio.h>

int main(){
    float nota1, nota2, nota3, soma, media;


    printf("Digite as tres notas do aluno: ");
    scanf("%f%f%f", &nota1, &nota2,&nota3);

    soma = nota1+nota2+nota3;
    media=soma/3;

    printf("A media do aluno foi: %.1f", media);
    
    return 0;
}