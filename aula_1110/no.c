#include "no.h"

t_no * constroi_no (int i) {
    t_no * novo = (t_no *) malloc (sizeof(t_no)); //novo é uma variavél do tipo ponteiro de nó (t_no *) 
    if (novo != NULL) {
        novo->info = i; // novo-> : caixinha que o novo aponta. i: número inteiro qualquer
        novo->proximo = NULL;
    }
    return novo;
}