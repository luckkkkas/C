#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int tam;
    int*vetor;
    printf("Escolha o tamanho do vetor: ");
    scanf("%d", &tam);
    vetor = (int *) malloc(sizeof (int)*tam);

    for (int i = 0; i < tam; i++)
    {
        vetor[i] = (int)pow(2,i);
        printf("Posição %d: %d\n", i, vetor[i]);
    }
    printf("Pressione Enter para sair...");
    getchar();
    getchar();

    free(vetor);
    return 0;
};