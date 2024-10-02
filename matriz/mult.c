#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int mat[2][3];
    int i, j, mult;

    printf("Digite números para alimentar a matriz: ");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Digite um valor para multiplicar a matriz: ");
    scanf("%d", &mult);

    printf("Matriz padrão: \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("[%d] ", mat[i][j]);
        }
        printf("\n");
    }

    printf("Matriz multiplicada:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("[%d] ", mat[i][j] * mult);
        }
        printf("\n");
    }
    
    return 0;
}