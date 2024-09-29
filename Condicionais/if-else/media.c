#include <stdio.h>

int main(){
    float n1, n2, n3, n4, media;

    printf("Digite quatro notas para o aluno: ");
    scanf("%f%f%f%f", &n1, &n2, &n3,&n4);

    media =(n1+n2+n3+n4)/4;

    printf("O aluno ");
    if(media>=5){
        printf("esta aprovado!");
    } else{
        printf("esta reprovado!");
    }
    
    return 0;
}