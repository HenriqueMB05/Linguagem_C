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
        printf("Cidade: ");
        fgets(novoEndereco.cidade, Max_Tam, stdin);
        strtok("\n",novoEndereco.cidade);
        printf("CEP: ");
        fgets(novoEndereco.CEP, Max_Tam, stdin);
        strtok("\n",novoEndereco.CEP);
        printf("Estado: ");
        fgets(novoEndereco.estado, Max_Tam, stdin);
        strtok("\n",novoEndereco.estado);
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


int contarElementos(char vetor[][Max_Tam], int tamanho){
    int count = 0;
    for (int i = 0; i < tamanho; i++){
        if (strlen(vetor[i]) > 0){ 
            count++;
        }
    }
    return count;
}


void listar(Agenda *agenda){
    int aux;
    if(agenda->qtdContato<1){
        printf("Não há contatos cadastrados!");
        return;
    }

    for(int i =0;i<agenda->qtdContato;i++){
        Contato contatos = agenda->contato[i];
    	aux = contarElementos(contatos.endereco, Max_qtd);
        printf("Nome: %s %s", contatos.nome, contatos.sobrenome);
        printf("Endereços:\n");
        for(int j =0;j<aux;j++){
            Endereco endereco = contatos.endereco[j];
            printf("Rua: %s", endereco.rua);
            printf("Número: %d\n", endereco.numeroCasa);
            printf("Bairro: %s", endereco.bairro);
            printf("Cidade: %s", endereco.cidade);
            printf("CEP: %s", endereco.CEP);
            printf("Estado: %s", endereco.estado);   
        }
        aux = contarElementos(contatos.telefone, Max_qtd);
        printf("Números: \n");
        for(int j=0;j<aux;j++){
            printf("%dº: %s", j+1, contatos.telefone[j]);
        }
        aux = contarElementos(contatos.email, Max_qtd);
        printf("Emails: ");
        for(int j=0;j<aux;j++){
            printf("%dº: %s", j+1, contatos.email[j]);
        }
        printf("\n");
    }
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
                listar(&agenda);
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