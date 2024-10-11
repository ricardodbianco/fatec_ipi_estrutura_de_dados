#include <stdio.h>
#include <stdlib.h>

typedef struct no { // typedef (você dá o nome/apelido para essa estrutura): tudo dentro do bloco funciona como t_no (tipo nó)
    int info;
    struct no * proximo;
} t_no; //tipo nó

t_no * constroi_no (int); //devolve um endereço(ponteiro *) do tipo nó
