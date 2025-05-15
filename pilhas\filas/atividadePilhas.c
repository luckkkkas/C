#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAMANHO_PILHA 7
int op = 1;

struct Livro {
    char codigo[10];
    char nomeLivro[50];
    char autor[50];
};

struct pDLivros {
    int topo;  
    struct Livro pilhasLivros[TAMANHO_PILHA];
};

struct pDLivros pilha = { .topo = -1 };

void showPilha();
void inserir_pilha();
void remover_pilha();
void menu_mostrar();

int main(){
    while (op != 0)
    {
        showPilha();
        menu_mostrar();
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            inserir_pilha();
            break;
        case 2:
            remover_pilha();
            break;
        }
    }
    
}

void menu_mostrar(){
    printf("\n\n--- MENU ---\n");
    printf("1 - Inserir na pilha\n");
    printf("2 - Remover da pilha\n");
    printf("0 - Sair\n");
    printf("Escolha uma opção: ");
}

void showPilha(){
    printf("\n--- PILHA DE LIVROS ---\n");
    if (pilha.topo == -1) {
        printf("Pilha está vazia.\n");
        return;
    }
    for (int i = pilha.topo; i >= 0; i--) {
        printf("Livro %d:\n", i + 1);
        printf("  Código: %s\n", pilha.pilhasLivros[i].codigo);
        printf("  Nome: %s\n", pilha.pilhasLivros[i].nomeLivro);
        printf("  Autor: %s\n", pilha.pilhasLivros[i].autor);
    }
}

void inserir_pilha() {
    if (pilha.topo == TAMANHO_PILHA - 1) {
        printf("A pilha está cheia, não é possível adicionar mais!\n");
        return;
    }

    pilha.topo++;

    printf("Digite o código do livro: ");
    scanf("%s", pilha.pilhasLivros[pilha.topo].codigo);

    printf("Digite o nome do livro: ");
    scanf(" %[^\n]", pilha.pilhasLivros[pilha.topo].nomeLivro);

    printf("Digite o autor do livro: ");
    scanf(" %[^\n]", pilha.pilhasLivros[pilha.topo].autor);

    printf("Livro inserido com sucesso!\n");
}

void remover_pilha(){
    if(pilha.topo == -1){
        printf("Pilha vazia, não é possível remover!\n");
        return;
    }
    
    printf("\nRemovendo Livro: %s\n", pilha.pilhasLivros[pilha.topo].nomeLivro);
    pilha.topo--;

    printf("Livro Removido da pilha!");
};