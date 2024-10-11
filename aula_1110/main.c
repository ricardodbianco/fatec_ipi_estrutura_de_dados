#include "no.h"

int main () {
    struct no a; //a é uma struct nó
    t_no b; //b é uma struct nó
    t_no * p; //p é um ponteiro para uma struct nó

    a.info = 12;

    b.info = 35;
    printf("Endereco da variavel b: %p\n", &b); //%p: pointer (ponteiro)

    a.proximo = &b; // a.proximo recebe o endereço de b
    printf("Endereco da variavel a: %p\n", &a); //%p: pointer (ponteiro)

    p = &a; //p recebe endereço de a

    return 0;
}