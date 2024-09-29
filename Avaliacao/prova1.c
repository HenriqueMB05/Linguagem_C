#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int esc, qtd_bebida, qtd_prato, pessoas;
    float preco_prato, preco_bebida, preco_bruto, desc, preco_desc, preco_pessoa;

    printf("1\t Prato Executivo:\t 45.50\n\t Refrigerante Baré:\t 3.50\n\n");
    printf("2\t Almoço especial:\t 65.00\n\t Jarra de suco: \t 18.00\n\n");
    printf("Qual  combo você deseja: ");

    do
    {
        scanf("%d", &esc);
        if (esc > 2 || esc <=0)
        {
            printf("Código inválido. Selecione um novo código (1 ou 2): ");
        }
    } while (esc > 2 || esc<=0);

    if (esc == 1)
    {
        printf("\n\nCódigo: 1 \nPrato Executivo \t45.50 \nRefrigerante Baré \t3.50\n");
        printf("\nQuantos Pratos Executivos você deseja consumir: ");
        scanf("%d", &qtd_prato);
        preco_prato = qtd_prato * 45.50;
        printf("SubTotal Prato: R$%.2f\n\n", preco_prato);
        printf("Quantos Refrigerantes Baré você deseja consumir: ");
        scanf("%d", &qtd_bebida);
        preco_bebida = qtd_bebida * 3.50;
        printf("SubTotal Bebidas: R$%.2f\n\n", preco_bebida);
    }
    else
    {
        printf("\n\nCódigo: 2 \nAlmoço Especial \t65.00 \nJarra de suco \t\t18.00\n");
        printf("Quantos Almoços Especiais você deseja consumir: ");
        scanf("%d", &qtd_prato);
        preco_prato = qtd_prato * 65.00;
        printf("SubTotal Pratos: R$%.2f\n\n", preco_prato);
        printf("Quantas Jarra de suco você deseja consumir: ");
        scanf("%d", &qtd_bebida);
        preco_bebida = qtd_bebida * 18.00;
        printf("SubTotal Bebidas: R$%.2f\n\n", preco_bebida);
    }

    printf("Quantas pessoas irão pagar a conta: ");
    scanf("%d", &pessoas);
    preco_bruto = preco_bebida + preco_prato;

    if (preco_bruto <= 500)
    {
        desc = (preco_bruto * 3 / 100);
    }
    else if (preco_bruto <= 800)
    {
        desc = (preco_bruto * 5 / 100);
    }
    else if (preco_bruto > 800)
    {
        desc = (preco_bruto * 7 / 100);
    }

    preco_desc = preco_bruto - desc;
    preco_pessoa = preco_desc / pessoas;

    printf("Valor Bruto:\tR$%.2f\n", preco_bruto);
    printf("Valor desconto:\tR$%.2f\n", desc);
    printf("Valor a pagar:\tR$%.2f\n\n", preco_desc);

    printf("Cada pessoa irá pagar:\t R$%.2f\n", preco_pessoa);

    system("pause");

    return 0;
}