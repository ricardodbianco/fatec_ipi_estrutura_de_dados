 
#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

typedef 
    struct {
        int topo;
        char *v;
        int capacidade;
    }
pilha;    

void inicia_pilha(pilha *, int);
int pilha_cheia(pilha *);
int pilha_vazia(pilha *);
void push(char,pilha *);
char pop (pilha *);
void mostrar_pilha(pilha *);