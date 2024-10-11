#include "lista.h"

void inicia_lista (t_lista *l) {//inicia a lista vazia. l é um ponteiro do tipo lista (t_lista)
    l->primeiro = NULL;
} 
int lista_vazia (t_lista *l) {
    return (l->primeiro == NULL);
}
void insere_inicio (int i, t_lista *l) {
    t_no * novo = constroi_no(i);
    if (novo != NULL) {
        if(!lista_vazia(l)) {
            novo->proximo = l->primeiro;
        }
        l->primeiro = novo;
    }
}
void exibe_lista (t_lista *l) {

}