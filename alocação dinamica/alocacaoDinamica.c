#include <stdio.h>
#include <stdlib.h>
////alcação dinamica
int main() {
    int *ptr; //indica para apotar par um local na memória onde tenha um espaço de 4 bytes disponível
    
    printf ("endereço: %p\n\n", ptr); // vai mostrar o endereço do espaço reservado
    
    ptr = (int *) malloc(sizeof (int));// vai reservei um espaço de 4bytes na memória 
    
    printf ("Endereco: %p \nValor: %d\n\n", ptr, *ptr);//como não foi atribuído valor na variavel, se o endereço que for reservado possuir valor, esse passa a ser o valor da variável.
}