#include <stdio.h>
#include <string.h>
#include <locale.h>

typedef struct{
    char nome[50];
    int idade;
    float nota_final;
}ALUNO;

typedef struct {
    ALUNO aluno[5];
    int qtd_aluno;
}ALUNOS;


void addAluno(ALUNOS *alunos){
    ALUNO novoAluno;
    if(alunos->qtd_aluno>=5){
        printf("Quatida máxima de alunos cadastrada");  
        return;
    }

    printf("Qual o nome do Aluno: ");
    scanf("%49s", novoAluno.nome);
    printf("Qual a idade do aluno %s: ", novoAluno.nome);
    scanf("%d", &novoAluno.idade);
    printf("Qual a nota final do aluno %s: ", novoAluno.nome);
    scanf("%f", &novoAluno.nota_final);

    alunos->aluno[alunos->qtd_aluno]=novoAluno;
    alunos->qtd_aluno++;
}


void lista(ALUNOS *alunos){
    for(int i=0;i<alunos->qtd_aluno;i++){
        ALUNO novoAluno = alunos->aluno[i];
        printf("\nAluno: %s\n", novoAluno.nome);
        printf("\nIdade: %d\n", novoAluno.idade);
        printf("\nNota final: %.1f\n", novoAluno.nota_final);
    }
}


int main(){
    setlocale(LC_ALL, "");
    ALUNOS alunos;
    alunos.qtd_aluno=0;
    int op;
    do{
        printf("\n1. Adicionar Livro\n");
        printf("2. Listar Livros\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &op);

        switch (op){ 
        case 1:
            addAluno(&alunos);
            break;
        case 2:
            lista(&alunos);
            break;
        default:
            if(op>3){
                printf("\nValor inválido");
            }
            printf("Saindo!");
            break;
        }
    }while(op!=3);

    return 0;
}