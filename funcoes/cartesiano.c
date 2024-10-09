#include <stdio.h>
#include <locale.h>
#include <math.h>

float dist(int x1, int y1, int x2, int y2)
{
    int x3, y3;

    x3 = pow((float)x2 - x1, 2);
    y3 = pow((float)y2 - y1, 2);

    return sqrt(x3 + y3);
}

int main()
{
    setlocale(LC_ALL, "");
    int x1, x2, y1, y2;
    float d;
    printf("Digite os dois primeros pontos: ");
    scanf("%d%d", &x1, &y1);

    printf("Digite os dois segundos pontos: ");
    scanf("%d%d", &x2, &y2);

    d = dist(x1,y1,x2,y2);
    printf("A distância entre os dois pontos é %.1f", d);

    return 0;
}