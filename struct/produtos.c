#include <stdio.h>
#include <string.h>
#include <locale.h>

// Criando o struct de dados dos produtos
typedef struct{
    char nome[30];
    float preco;
    float precoD;
    char categoria[50];
} Produto;

// Criando o struct que armazenara os dados de Produto e a quantidade de itens que já estão presente no vetor produto
typedef struct {
    Produto produto[5];
    int qtdItens;
}Estoque;

/*Verifica se o estoque está cheio se sim printa uma mensagem e retorna 
se não adiciona um novo produto*/
void addProd(Estoque *estoque){
    if(estoque->qtdItens>5){
        printf("Estoque cheio\nNão é possivel adicionar mais produtos");
        return;
    }
    Produto novoProduto;

    printf("Adicionando um novo produto\n");
    printf("Nome do produto: ");
    fgets(novoProduto.nome, 30, stdin);
    strtok("\n", novoProduto.nome);
    printf("Categoria:");
    fgets(novoProduto.categoria, 30, stdin);
    strtok("\n", novoProduto.categoria);
    printf("Preço: R$");
    scanf("%f", &novoProduto.preco);
    estoque->produto[estoque->qtdItens] =novoProduto;
    estoque->qtdItens++;
}


void buscar(Estoque *estoque){
    char busca[30];
    printf("Qual produto você está procurando!\n>>>");
    fgets(busca, 30, stdin);
    strtok("\n", busca);
    for(int i=0;i<estoque->qtdItens;i++){
        Produto item = estoque->produto[i];
        if(strcmp(item.nome, busca)==0){
            printf("Produto:\n");
            printf("Nome: %s", item.nome);
            printf("Categoria: %s", item.categoria);
            printf("Preço: R$%.2f", item.preco);
            return;
        }
    }
    printf("Produto inexistente!"); 
}

void listar(Estoque *estoque){
    for(int i=0;i<estoque->qtdItens;i++){
        Produto item =  estoque->produto[i];
        if (item.preco >= 100){
            item.precoD = item.preco - (item.preco * 10 / 100);
            printf("Produtos com desconto\n");
            printf("\nProduto Nº %d\n\n", i + 1);
            printf("Nome: %s", item.nome);
            printf("Categoria: %s", item.categoria);
            printf("Preço: R$%.2f\n\n", item.precoD);
        } else{
            printf("Produtos sem desconto");
            printf("\nProduto %dº\n", i + 1);
            printf("Nome: %s", item.nome);
            printf("Categoria: %s", item.categoria);
            printf("Preço: R$%.2f\n\n", item.preco);
        }
    }

}


int main(){
    setlocale(LC_ALL, "");
    Estoque estoque;
    estoque.qtdItens =0;
    
    int op;

    do{
        printf("1.Adicionar produto\n");
        printf("2.Listar produto\n");
        printf("3.Buscar\n");
        printf("4.Sair\n");
        scanf("%d", &op);
        getchar();
        switch (op)
        {
        case 1:
            addProd(&estoque);
            break;
        case 2:
            listar(&estoque);
            break;
        case 3:
            buscar(&estoque);
            break;
        default:
            if (op > 4)
            {
                printf("Valor inválido\n");
            }
            printf("Saindo!");
            break;
        }
    } while (op < 4);

    return 0;
}

