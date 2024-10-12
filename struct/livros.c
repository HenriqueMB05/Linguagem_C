#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <conio.h>

typedef struct
{
    char titulo[100];
    char autor[50];
    int pub;
} Livro;

typedef struct
{
    Livro livro[3];
    int qtdLivro;
} Biblioteca;

void addLivro(Biblioteca *bib)
{
    if (bib->qtdLivro >= 3)
    {
        printf("Quantidade m�xima de livros atingida!\nN�o � possivel adicionar mais livros!");
        return;
    }

    Livro novoLivro;

    printf("T�tulo: ");
    fgets(novoLivro.titulo, 100, stdin);
    strtok(novoLivro.titulo, "\n");

    printf("Autor: ");
    fgets(novoLivro.autor, 50, stdin);
    strtok(novoLivro.autor, "\n");

    printf("Ano de publica��o: ");
    scanf("%d", &novoLivro.pub);
    getchar();

    bib->livro[bib->qtdLivro] = novoLivro;
    bib->qtdLivro++;
}

void listarLivro(Biblioteca *bib)
{
    for (int i = 0; i < bib->qtdLivro; i++)
    {
        Livro livros = bib->livro[i];
        printf("Livro %d", i + 1);
        printf("\nT�tulo: %s\n", livros.titulo);
        printf("Autor: %s\n", livros.autor);
        printf("Publica��o: %d\n\n", livros.pub);
    }
}

int main()
{
    setlocale(LC_ALL, "");
    int op;
    Biblioteca bib;
    bib.qtdLivro = 0;

    do{
        printf("1.Adicionar Livro\n");
        printf("2.Listar livro\n");
        printf("3.Sair\n");
        scanf("%d", &op);
        getchar();
        switch (op){
        case 1:
            addLivro(&bib);
            break;
        case 2:
            listarLivro(&bib);
            break;
        default:
            if(op>3){
            printf("Valor inv�lido\n");
            }
            printf("Saindo!");
            break;
        }
    } while (op != 3);
    return 0;
}