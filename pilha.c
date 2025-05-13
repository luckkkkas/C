#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define tamanho 5

struct tpilha
{
    int dados[tamanho];
    int inicio;
    int fim;
};

struct tpilha pilha;
int op;

// Protipação
void pilha_inserir();
void pilha_remover();
void pilha_mostrar();
void menu_mostrar();

int main()
{
    setlocale(LC_ALL, "Portuguese");
    op = 1;
    pilha.inicio = 0;
    pilha.fim = 0;
    while (op != 0)
    {
        system("cls");
        pilha_mostrar();
        menu_mostrar();
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            pilha_inserir();
            break;
        case 2:
            pilha_remover();
            break;
        }
    }
    return (0);
}

void pilha_inserir()
{
    if (pilha.fim == tamanho)
    {
        printf("não existe espaço nesta pilha!");
        getchar();
        getchar();
    }
    else
    {
        printf("\nDigite o valor a ser empilhado: ");
        scanf("%d", &pilha.dados[pilha.fim]);
        pilha.fim++;
    }
}

void pilha_remover()
{
    if (pilha.inicio == pilha.fim)
    {
        printf("\nA pilha está vazia, impossível desempilhar\n\n");
        getchar();
        getchar();
    }
    else
    {
        pilha.dados[pilha.fim - 1] = 0;
        pilha.fim--;
    }
}

void pilha_mostrar()
{
    printf("[");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d,", pilha.dados[i]);
    }

    printf("]");
}

void menu_mostrar()
{
    printf("\nEscolha uma opção:\n");
    printf("1 - Empilhar\n");
    printf("2 - Desempilhar\n");
    printf("0 - Sair\n\n");
}