#include <stdio.h>
#include <string.h>
#include <locale.h>

typedef struct{
    char nome[50];
    char cargo[30];
    float salario;
}Funcionario;


typedef struct{
    Funcionario func[4];
    int qtdFunc;
}Contratados;

/* void aumentarSalario(Contratados *cont){
    for(int i=0;i<cont->qtdFunc;i++){
        Funcionario funcionario = cont->func[i];
        funcionario.salario *=1.05;
    }
} */


void addFunc(Contratados *cont){
    if(cont->qtdFunc>=4){
        printf("N�o � possivel cadastrar novos funcion�rios!");
        return;
    }

    Funcionario novoFunc;

    printf("Nome: ");
    fgets(novoFunc.nome, 50, stdin);
    strtok("\n", novoFunc.nome);
    printf("Cargo: ");
    fgets(novoFunc.cargo, 30, stdin);
    strtok("\n", novoFunc.cargo);
    printf("Sal�rio: R$");
    scanf("%f", &novoFunc.salario);

    cont->func[cont->qtdFunc] = novoFunc;
    cont->qtdFunc++;
}


void mostrarFunc(Contratados *cont){
    float aux;
    for(int i=0;i<cont->qtdFunc;i++){
        Funcionario funcionario = cont->func[i];

        printf("\nFuncion�rio %d\n", i+1);
        printf("Nome:  %s", funcionario.nome);
        printf("Cargo:  %s", funcionario.cargo);
        printf("Sal�rio Base:  R$%.2f\n", funcionario.salario);
        /*Essa parte do c�digo � responsavel por calcular o novo s�lario
        calculando para mostrar e depois apagar esse valor de aumento � 
        redusido do s�lario base*/
        aux = funcionario.salario * .05;
        funcionario.salario += aux;
        printf("Sal�rio com aumento:  R$%.2f\n\n", funcionario.salario);
        funcionario.salario -= aux;

    }
}

int main(){
    setlocale(LC_ALL, "");
    Contratados cont;
    cont.qtdFunc=0;
    int op;

    do{
        printf("Menu:\n");
        printf("1.Adicionar Funcion�rios\n");
        printf("2.Ver funcion�rios\n");
        printf("3.Sair\n");
        scanf("%d", &op);

        getchar();
        switch (op)
        {
        case 1:
            addFunc(&cont);
            
            break;
        case 2:
            mostrarFunc(&cont);
            break;
        default:
            break;
        }
    }while(op<3);
}