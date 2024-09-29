#include <stdio.h>

int main()
{
    int idade;

    
    printf("Digite a idade: ");
    scanf("%d", &idade);

    switch (idade / 10){
    case 0: // Idade entre 0 e 9
    case 1: // Idade entre 10 e 12
        printf("Criança\n");
        break;
    case 2: // Idade entre 13 e 19 (adolescente)
        if (idade >= 13 && idade <= 17){
            printf("Adolescente\n");
        } else if (idade >= 18 && idade <= 19){
            printf("Adulto\n");
        }
        break;
    case 3: // Idade entre 20 e 29
    case 4: // Idade entre 30 e 39
    case 5: // Idade entre 40 e 59
        printf("Adulto\n");
        break;
    default: // Idade 60 ou mais
        if (idade >= 60){
            printf("Idoso\n");
        } else{
            printf("Idade inválida\n");
        }
    }

    return 0;
}
