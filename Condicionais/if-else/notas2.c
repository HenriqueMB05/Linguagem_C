#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");

    float n1,n2,n3, media;

    printf("Digite três notas do aluno: ");
    scanf("%f%f%f", &n1,&n2,&n3);

    media =(n1+n2+n3)/3;

    printf("%.1f -> ", media);
    if(media>=9&&media<11){
        printf("Excelente");
    } else if(media>=7&&media<9){
        printf("Bom");
    } else if(media>=5&&media<7){
        printf("Regular");
    } else if(media<5){
        printf("Insuficiente");
    }

    return 0;
}
