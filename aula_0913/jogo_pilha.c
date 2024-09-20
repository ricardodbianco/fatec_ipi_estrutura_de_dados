#include <time.h>
#include "pilha.h"
int main(){
    pilha p;
    inicia_pilha(&p, 10);
    srand(time(0));
    do{
        if(rand() % 2 == 1){ //empilhar push
            if(!pilha_cheia(&p)){
                char letra =rand() % 26 + 65;
                push(letra, &p);
            }

        } 
        else{ //pop desempilhar
            if(!pilha_vazia(&p)){
                char letra = pop(&p);
            }
            
        }
        mostrar_pilha(&p);
    } while(!pilha_vazia(&p));
    return 0;
}