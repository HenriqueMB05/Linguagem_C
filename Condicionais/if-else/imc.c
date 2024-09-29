#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");

    float h, p, imc;

    printf("Digite sua altura: ");
    scanf("%f", &h);

    printf("Digite o seu peso: ");
    scanf("%f", &p);

    imc = p/(h*2);

    printf("IMC: %.2f ", imc);
    if (imc <= 18.5)
    {
        printf("abaixo do peso");
    } else if(imc<=25 && imc>18.5){
        printf("Peso normal");
    } else if(imc<=30 && imc>25){
        printf("Acima do peso");
    } else{
        printf("Obeso");
    }

    return 0;
}