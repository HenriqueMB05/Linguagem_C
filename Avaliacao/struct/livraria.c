#include <stdio.h>
#include <locale.h>
#include <string.h>

typedef struct{
    char titulo[50];
    char autor[30];
    char ISBN[15];
    char editora[30];
    int pub;
    int paginas;
    int numgen;
    char generos[5][30];
}Livro;

typedef struct{
    Livro livro[5];
    int qtdLivros;
}Biblioteca;

void addLivro(Biblioteca *bib){
    if(bib->qtdLivros>=5){
        printf("Quantidade máxima de livros alcançada.\nNão é possivel adicionar novos livros!\n");
        return;
    }

    Livro novoLivro;

    printf("Título: ");
    fgets(novoLivro.titulo, 50, stdin);
    strtok("\n", novoLivro.titulo);

    printf("Autor: ");
    fgets(novoLivro.autor, 30, stdin);
    strtok("\n", novoLivro.autor);
    
    printf("ISBN: ");
    fgets(novoLivro.ISBN, 15, stdin);
    strtok("\n", novoLivro.ISBN);

    printf("Editora: ");
    fgets(novoLivro.editora, 30, stdin);
    strtok("\n", novoLivro.editora);

    printf("Ano de publicação: ");
    scanf("%d", &novoLivro.pub);

    printf("Número de páginas: ");
    scanf("%d", &novoLivro.paginas);
    do{
        printf("Digite a quantidade de gêneros: [Máx. 5]");
        scanf("%d", &novoLivro.numgen);
    } while (novoLivro.numgen>6);
    
    getchar();
    
    for(int i=0;i<novoLivro.numgen;i++){
        printf("Digite os %dº gênero: ", i+1);
        fgets(novoLivro.generos[i], 30, stdin);
        strtok("\n", novoLivro.generos[i]);
    }
    
    bib->livro[bib->qtdLivros]=novoLivro;
    bib->qtdLivros++;
}


void listar(Biblioteca *bib){
    for(int i=0;i<bib->qtdLivros;i++){
        Livro livro = bib->livro[i];
        printf("Livros\n\n");
        printf("Titulo: %s", livro.titulo);
        printf("Autor: %s", livro.autor);
        printf("ISBN: %s", livro.ISBN);
        printf("Editora: %s", livro.editora);
        printf("Publicação: %d\n", livro.pub);
        printf("Páginas: %d\n", livro.paginas);
        printf("Gêneros:\n");
        for(int j=0;j<livro.numgen;j++){
            printf("%s", livro.generos[j]);
        }
    }
}

int main(){
    setlocale(LC_ALL, "");
    return 0;
}