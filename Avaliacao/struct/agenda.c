#include <stdio.h>
#include <string.h>
#include <locale.h>

#define Max_Tam 50
#define Max_qtd 5

typedef struct{
    char rua[Max_Tam];
    int numeroCasa;
    char bairro[Max_Tam];
    char cidade[Max_Tam];
    char estado[Max_Tam];
    char CEP[Max_Tam];
}Endereco;

typedef struct{
    Endereco endereco[Max_qtd];
    char nome[Max_Tam];
    char sobrenome[Max_Tam];
    char telefone[Max_qtd][Max_Tam];
    char email[Max_qtd][Max_Tam];
}Contato;

typedef struct{
    Contato contato[Max_qtd];
    int qtdContato;
}Agenda;

int quantidade(){
    int aux;
    do{
        scanf("%d", &aux);
    } while (aux <= Max_qtd);
    getchar();
    return aux;
}

void endereco(){
    int aux;
    Endereco novoEndereco;
    printf("Quantos endereços: ");
    aux = quantidade();
    for (int i = 0; i < aux; i++){
        printf("Número da casa: ");
        scanf("%d", &novoEndereco.numeroCasa);
        getchar();
        printf("Rua: ");
        fgets(novoEndereco.rua, Max_Tam, stdin);
        strtok("\n",novoEndereco.rua);
        printf("Bairro: ");
        fgets(novoEndereco.bairro, Max_Tam, stdin);
        strtok("\n",novoEndereco.bairro);
        printf("Rua: ");
        fgets(novoEndereco.rua, Max_Tam, stdin);
    }

}

void addContato(Agenda *agenda){
    int aux;
    if(agenda->qtdContato>=Max_qtd){
        printf("Quantiddade máxima de livros cadastrados\nNão é possivel cadastrar mais livros!\n");
        return;
    }

    Contato novoContato;

    printf("Nome: ");
    fgets(novoContato.nome, Max_Tam, stdin);
    strtok("\n", novoContato.nome);
    printf("Sobrenom: ");
    fgets(novoContato.sobrenome, Max_Tam, stdin);
    strtok("\n", novoContato.sobrenome);
    printf("Quantos números: ");
    aux = quantidade();
    for(int i=0;i<aux;i++){
        printf("%dº número: ", i+1);
        fgets(novoContato.telefone[i], Max_Tam, stdin);
        strtok("\n", novoContato.telefone[i]);
    }
    printf("Quantos email: ");
    aux = quantidade();
    for(int i=0;i<aux;i++){
        printf("%dº Email: ", i + 1);
        fgets(novoContato.email[i], Max_Tam, stdin);
        strtok("\n", novoContato.email[i]);
    }
}

int main(){
    Agenda agenda;
    agenda.qtdContato=0;
}