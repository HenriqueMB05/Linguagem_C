#include <stdio.h>
#include <math.h>
#include <locale.h>

typedef struct {
    float x;
    float y;
}Pontos;


float distancia(Pontos p1, Pontos p2){    
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}


int main(){
    setlocale(LC_ALL, "");

    Pontos p1, p2;
    float dist;
    printf("Digite as cordenadas do primeiro ponto (x1 y1): ");
    scanf("%f %f", &p1.x, &p1.y);
    printf("Digite as cordenadas do primeiro ponto (x2 y2): ");
    scanf("%f %f", &p2.x, &p2.y);

    dist = distancia(p1, p2);
    printf("A distância entre os dois pontos é: %.1f\n", dist);

    return 0;
}
