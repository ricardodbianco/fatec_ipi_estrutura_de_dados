#include "no.h"

typedef struct lista {
    t_no * primeiro;
} t_lista; //tipo lista

void inicia_lista (t_lista *); //inicia a lista vazia
int lista_vazia (t_lista *);
void insere_inicio (int, t_lista *);
void exibe_lista (t_lista *);