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
    }while (aux > Max_qtd);
    getchar();
    return aux;
}


void addEndereco(Contato *contato){
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
        contato->endereco[i] = novoEndereco;
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
    printf("Sobrenome: ");
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
    addEndereco(&novoContato);
    agenda->contato[agenda->qtdContato]=novoContato;
    agenda->qtdContato++;
}


int indice(){
    Agenda agenda;
    char nome[Max_Tam];
    printf("Qual o nome do contato: ");
    fgets(nome, Max_Tam, stdin);
    strtok("\n", nome);
    for(int i=0;i<agenda.qtdContato;i++){
        Contato contatos = agenda.contato[i];
        if(strcmp(contatos.nome, nome)==0){
            return i;
        }
    }
    return -1;
}


void remover(Agenda *agenda){
    int aux = indice();
    if(aux== -1){
        printf("Livro não encontrado");
        return;
    }
    for(int i =aux; i<agenda->qtdContato;i++){
        agenda->contato[i] = agenda->contato[i+1];
        agenda->qtdContato--;
    }
}


int main(){
    setlocale(LC_ALL, "");
    Agenda agenda;
    agenda.qtdContato=0;
    int op;

    do{
        printf("1.Adicionar contato\n");
        printf("2.Listar contatos\n");
        printf("3.Remover contatos\n");
        printf("4.Sair\n");
        scanf("%d", &op);
        getchar();
        switch(op){
            case 1:
                addContato(&agenda);
                break;
            case 2:
                //listar(&agenda);
                break;
            case 3:
                remover(&agenda);
                break;
            case 4:
                printf("Saindo");
                break;
            default:
                printf("Valor inválido.\nTente novamente.");
                break;

        }
    }while(op!=4);

    return 0;
}