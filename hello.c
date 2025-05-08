#include <stdio.h>
#include <stdlib.h>
//
////float matriz[2][3]; //declaração de matriz
//
//// matriz[0][0]; // primeira linha, primeira coluna
//// matriz[0][1]; // primeira linha, segunda coluna
//// matriz[1][2];
//
////int dados[5]; //vetor de dados homogeneo;
////struct fraction {  //Registro forma heterogenea de armazenar dados;
////    int numerator;
////    int denominator;
////    float value;
////}
//
////int main() {
////    printf("Hello, world!\n");
////    return 0;
////}
//
////ponteiros 
//
//int xi;
//int *ptr_xi; 
//
////int x = *ptr_xi; //atribuindo o valor da variável que o ponteiro aponta.
//
//void imprimir(){
//    printf("Valor de xi = %d \n", xi); //uma variavel qualquer
//    printf("Valor de &xi = %p \n", &xi);//atribuindo o endereço da variável xi ao ponteiro
//    printf("Valor de ptr_xi = %p \n", ptr_xi); // endereço da variavel desejada
//    printf("Valor de *ptr_xi = %d \n\n", *ptr_xi);//atribuindo o valor da variável que o ponteiro aponta.
//}
//int main() {
//    xi = 10;
//    ptr_xi = &xi;
//    imprimir();
//
//    xi = 20;
//    imprimir(); //ao reatribuirmos o valor tanto a váriavel como o valor para onde o ponteiro aponta muda, já que são o mesmo valor.
//
//    *ptr_xi = 30; //alterando o valor da variável pelo ponteiro 
//    imprimir();
//
//    system("read -p 'Pressione Enter para sair...' var");
//    return(0);
//}
//
////alcação dinamica
int main() {
    int *ptr; //indica para apotar par um local na memória onde tenha um espaço de 4 bytes disponível
    
    printf ("endereço: %p\n\n", ptr); // vai mostrar o endereço do espaço reservado
    
    ptr = (int *) malloc(sizeof (int));// vai reservei um espaço de 4bytes na memória 
    
    printf ("Endereco: %p \nValor: %d\n\n", ptr, *ptr);//como não foi atribuído valor na variavel, se o endereço que for reservado possuir valor, esse passa a ser o valor da variável.
}