#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    float salarioBruto, salarioLiquido, desconto;

    printf("Digite o sálario bruto do funcionário: R$");
    scanf("%f", &salarioBruto);
    printf("O salário R$%.2f ", salarioBruto);
    if(salarioBruto<2259.21){
        printf("não tem desconto de IR", 37);
    }else if(salarioBruto>2259.20){
        printf("tem 7,5%c de desconto no IR", 37);
        desconto = salarioBruto*7.5/100;
    } else if(salarioBruto>2826.65){
        printf("tem 15%c de desconto  no IR"),37;
        desconto = salarioBruto*15/100;
    } else if(salarioBruto>3751.05){
        printf("tem 22,5%c de desconto no IR",37);
        desconto = salarioBruto*22.5/100;
    } else if(salarioBruto>4664.68){
        printf("tem 27,5%c de desconto no IR",37);
        desconto = salarioBruto*27.5/100;
    }

    printf("\nO valor do desconto é R$%.2f", desconto);
    salarioLiquido = salarioBruto-desconto;
    printf("\nO valor do salário líquido é R$%.2f", salarioLiquido);

    return 0;
}
