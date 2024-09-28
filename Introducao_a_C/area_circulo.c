#include <stdio.h>
#include <math.h>

int main(){
    float raio, area, pi=3.1415;

    printf("Digite o raio de um circulo: ");
    scanf("%f", &raio);

    area = pi*pow(raio,2.0);

    printf("Area = %.2f", area);

    return 0;
}