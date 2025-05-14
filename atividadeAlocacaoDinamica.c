//• Faça um pequeno programa para testar seus conhecimentos sobre ponteiros e alocação
//dinâmica de memória.
//• Defina um ponteiro do tipo inteiro.
//• Faça alocação dinâmica para o ponteiro recém-criado.
//• Preencha a memória com o valor 42.
//• Imprima o endereço do ponteiro na memória e o valor contido nele.
#include <stdio.h>
#include <stdlib.h>

int main(){

    int *ptr;
    ptr = (int *) malloc(sizeof (int));
    printf("Antes da atribuição \nEndereço: %p \nValor: %d\n\n", ptr, *ptr);
    *ptr = 42;
    printf("Depois da atribuição \nEndereço: %p \nValor: %d\n\n", ptr, *ptr);
}