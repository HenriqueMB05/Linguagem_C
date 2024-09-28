#include <stdio.h>

int main(){
    float r, h, V;
    float pi=3.14159;

    printf("Informe o raio do cilindro: ");
    scanf("%f", &r);
    printf("Informe a altura do cilindro: ");
    scanf("%f", &h);

    V = pi*r*2*h;

    printf("Volume do cilindro = %.1f", V);
    
    return 0;
}