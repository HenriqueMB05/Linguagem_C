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
        Livro livros = bib->livro[i];
        printf("Livros\n\n");
        printf("Titulo: %s", livros.titulo);
        printf("Autor: %s", livros.autor);
        printf("ISBN: %s", livros.ISBN);
        printf("Editora: %s", livros.editora);
        printf("Publicação: %d\n", livros.pub);
        printf("Páginas: %d\n", livros.paginas);
        printf("Gêneros:\n");
        for(int j=0;j<livros.numgen;j++){
            printf("%s", livros.generos[j]);
        }
    }
}

void mostrar(Livro livros){
    
    printf("Titulo: %s", livros.titulo);
    printf("Autor: %s", livros.autor);
    printf("ISBN: %s", livros.ISBN);
    printf("Editora: %s", livros.editora);
    printf("Publicação: %d\n", livros.pub);
    printf("Páginas: %d\n", livros.paginas);
    printf("Gêneros:\n");
    for (int j = 0; j < livros.numgen; j++)
    {
        printf("%s", livros.generos[j]);
    }
}


void buscar(Biblioteca *bib){
    
    int aux;
    char buscar[50];
    printf("Por qual parâmetro você deseja pesquisar: \n");
    printf("1.Titulo\n");
    printf("2.Autor\n");
    printf("3.ISBN\n");
    printf("4.Editora\n");
    scanf("%d", &aux);
    getchar();
    printf("Pesquisar: ");
    fgets(buscar, 50,stdin);
    strtok("\n", buscar);
    for(int i=0;i<bib->qtdLivros;i++){
        Livro livros = bib->livro[i];
        switch (aux){
            case 1:
                if(strcmp(livros.titulo, buscar)==0){
                    mostrar(livros);
                }
                break;
            case 2:
                if(strcmp(livros.autor, buscar)==0){
                    mostrar(livros);
                }
                break;
            case 3:
                if(strcmp(livros.ISBN, buscar)==0){
                    mostrar(livros);
                }
                break;
            case 4:
                if(strcmp(livros.editora, buscar)==0){
                    mostrar(livros);
                }
                break;
            
            default:
                break;
        }
    }

}
int main(){
    setlocale(LC_ALL, "");
    Biblioteca bib;
    bib.qtdLivros=0;
    int op=0;
    do{
    addLivro(&bib);
    printf("\n\n\n");
    //listar(&bib);
    printf("\n\n\n");
    op++;
    }while(op!=2);
    buscar(&bib);

    return 0;
}