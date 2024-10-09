#include <stdio.h>

float temp(float c){
    return c*1.8+32;
}

int  main(){
    float c;

    printf("Digite o valor em celsius: ");
    scanf("%f", &c);

    printf("Valor em Celsius: %.1f\nValor em Fahrenheit: %.1f", c, temp(c));
    return 0;
}