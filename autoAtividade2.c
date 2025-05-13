// Crie um programa que leia uma variável e crie dois vetores dinâmicos, um com o tamanho
// lido e outro com o dobro desse tamanho. Preencha esses vetores, respectivamente, com
// potências de 2 e potências de 3.
// • Crie uma variável inteira e dois ponteiros do tipo inteiro.
// • Pergunte ao usuário o tamanho do vetor dinâmico e leia esse valor na variável inteira.
// • Aloque dinamicamente os dois vetores usando a função malloc.
// • Faça um laço de repetição para preencher o primeiro vetor com potências de 2.
// • Faça um segundo laço de repetição para preencher o outro vetor com potências de 3.
// • Não se esqueça de usar a biblioteca math.h para poder usar o cálculo de potência (pow)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int tam;
    int *ptr = &tam;
    int *vetor1;
    int *vetor2;

    printf("Tamnho dos vetores: ");
    scanf("%d", &tam);

    vetor1 = (int *) malloc(sizeof (int)*tam);
    vetor2 = (int *) malloc(sizeof (int)*tam);

    for (int i = 0; i < *ptr; i++)
    {
        vetor1[i] = (int)pow(2,i) ;
        vetor2[i] = (int)pow(3,i);
        printf("Endereço do Vetor1: %p \nvalor da posição atual vetor1: %d\n", &vetor1, vetor1[i]);
        printf("Endereço do Vetor2: %p \nvalor da posição atual vetor2: %d\n", &vetor2, vetor2[i]);
    }
    return 0;
}