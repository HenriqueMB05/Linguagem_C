#include <stdio.h>

int main(){
    int l1,l2,l3;

    printf("Digite os tres lados do triangulo: ");
    scanf("%d%d%d", &l1, &l2, &l3);

    if (((l1+l2>l3)&&(l1-l2<l3))&&((l1+l3>l2)&&(l1-l3<l2))&&((l2+l3>l1)&&(l2-l3<l1))){
        if (l1!=l2|| l1!=l3){
            if (l1==l2|| l1==l3 || l2 == l3){
                printf("Triangulo Isoceles!");
            } else{
                printf("Triangulo Escaleno!");
            }
        } else{
            printf("Triangulo Equilatero!");
        }
    } else{
        printf("Nao e possivel criar um triangulo com esses valores!");
    }

    return 0;
}