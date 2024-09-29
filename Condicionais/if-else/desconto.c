#include <stdio.h>

int main(){
    float preco, desc;

    printf("Digite o preco do produto!");
    scanf("%f", &preco);

    if(preco>=100){
        desc = preco-(preco*10/100);
        printf("O produto que custava R$%.2f, com o desconto de 10 porcento fica R$%.2f", preco, desc);
    } else{
        printf("O preco do produto (R$%.2f) e insuficiente para receber desconto", preco);
    }

    return 0;
}
