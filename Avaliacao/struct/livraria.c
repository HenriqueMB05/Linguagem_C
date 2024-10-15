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

/*Essa fun��o recebe a struct biblioteca como um ponteiro, assim � possivel manipular direto na memoria*/
void addLivro(Biblioteca *bib){
    // Verifica se o limite de livros foi excedido
    if(bib->qtdLivros>=5){
        printf("Quantidade m�xima de livros alcan�ada.\nN�o � possivel adicionar novos livros!\n");
        return;
    }

    Livro novoLivro;
/*usa o fgets para receber at� a quebra de linha, o strtok � para adicionar a quebra de linha*/
    printf("T�tulo: ");
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

    printf("Ano de publica��o: ");
    scanf("%d", &novoLivro.pub);

    printf("N�mero de p�ginas: ");
    scanf("%d", &novoLivro.paginas);
    do{
        printf("Digite a quantidade de g�neros: [M�x. 5]");
        scanf("%d", &novoLivro.numgen);
    } while (novoLivro.numgen>6);
    
    //O getchar � utilizado para limpar o buff da memoria, meio que a quebra de linha do scanf fica armazenado e conflita como fgets
    getchar();
    
    for(int i=0;i<novoLivro.numgen;i++){
        printf("Digite os %d� g�nero: ", i+1);
        fgets(novoLivro.generos[i], 30, stdin);
        strtok("\n", novoLivro.generos[i]);
    }
    
    //Adicionando o livro cadastrado no vetor livro dentro de biblioteca
    bib->livro[bib->qtdLivros]=novoLivro;
    bib->qtdLivros++;
}


void listar(Biblioteca *bib){
    //Verifica se existem livros cadastrados
    if(bib->qtdLivros==0){
        printf("N�o h� nenhum livro cadastrado\n");
        return;
    }


    for(int i=0;i<bib->qtdLivros;i++){
        Livro livros = bib->livro[i];
        printf("Livros\n\n");
        printf("Titulo: %s", livros.titulo);
        printf("Autor: %s", livros.autor);
        printf("ISBN: %s", livros.ISBN);
        printf("Editora: %s", livros.editora);
        printf("Publica��o: %d\n", livros.pub);
        printf("P�ginas: %d\n", livros.paginas);
        printf("G�neros:\n");
        for(int j=0;j<livros.numgen;j++){
            printf("%s", livros.generos[j]);
        }
    }
}

//Vai ser usado para mostrar um livro em especifico
void mostrar(Livro livros){
    printf("Titulo: %s", livros.titulo);
    printf("Autor: %s", livros.autor);
    printf("ISBN: %s", livros.ISBN);
    printf("Editora: %s", livros.editora);
    printf("Publica��o: %d\n", livros.pub);
    printf("P�ginas: %d\n", livros.paginas);
    printf("G�neros:\n");
    for (int j = 0; j < livros.numgen; j++)
    {
        printf("%s", livros.generos[j]);
    }
}


void buscar(Biblioteca *bib){
    if(bib->qtdLivros==0){
        printf("N�o h� nenhum livro cadastrado\n");
        printf("%d", bib->qtdLivros);
        return;
    }

    int aux;
    char buscar[50];
    //Menu de op��es do usu�rio, queria fazer o usuario escrever mas � meio chato toda vez escrever titulo ao inv�s de 1
    printf("Por qual par�metro voc� deseja pesquisar: \n");
    printf("1.Titulo\n");
    printf("2.Autor\n");
    printf("3.ISBN\n");
    printf("4.Editora\n");
    scanf("%d", &aux);
    getchar();
    printf("Pesquisar: ");
    fgets(buscar, 50,stdin);
    strtok("\n", buscar);

    //Vai percorrer por todo vetor livro e compara o nome pesquisado e o par�metro que o  usu�rio pediu
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
            //Aqui era para ter um de g�nero mas achei paia, dps eu adiciono
            default:
                break;
        }
    }

}


void removerLivro(Biblioteca *bib){
    // variavel para excluir o livro pelo titulo, n�o vou fazer com em pesquisar muito paia colocar varios metodos
    char tit[50];
    if(bib->qtdLivros==0){
        printf("N�o h� nenhum livro cadastrado!");
        return;
    }
    printf("Digite o t�tulo do livro que voc� deseja remover: ");
    fgets(tit, 50, stdin);
    strtok("\n", tit);
    for(int i=0;i<bib->qtdLivros;i++){
        Livro livros = bib->livro[i];
        //verificar se o titulo do livro � igual ao que o usu�rio digitou
        if(strcmp(livros.titulo, tit)==0){
            for(int j=0;j<bib->qtdLivros;j++){
                //O livro que foi encontrado ser� substituido pelo seguinte
                bib->livro[j] = bib->livro[j+1];
                /*Que coisa, n�o sei como remover o ultimo livro e agora t� sem internet para pesquisar.
                Como o ser humano olhou para a natureza e imaginou, vou invetar o C, caramba esse maluco n�o tinha um dbz pra assistir ou ler nn????*/
                printf("%d -> %d\n",j, j+1);
            }
            return;
        }
    }
}


int main(){
    setlocale(LC_ALL, "");
    Biblioteca bib;
    bib.qtdLivros=0;
    int op;

    do{
        printf("Menu:\n\n");
        printf("1.Adicionar Livro\n");
        printf("2.Listar Livros\n");
        printf("3.Buscar Livro\n");
        printf("4.Remover Livro\n");
        printf("5.Sair\n");
        scanf("%d", &op);
        getchar();
        switch(op){
            case 1:
                addLivro(&bib);
                break;
            case 2:
                listar(&bib);
                break;
            case 3:

                buscar(&bib);
                break;
            case 4:
                removerLivro(&bib);
                break;
            default:
                break;
        }
    }while(op!=5);

    return 0;
}