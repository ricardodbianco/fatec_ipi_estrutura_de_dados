#include <stdio.h>

void f1 (int a){
    printf("Entrei na f1: %d \n", a);
    a++;
}
void f2 (int a){
    printf("Entre na f2: %d \n", a);
    
    a++;
    //passagem de valor local
    f1(a);
}
//ponteiro de inteiro, guarda o endereço de uma variável de inteiro
void f3(int *a){
    
    printf ("Valor de a na chegada da f3: %d\n", *a);
    //*a operador derreferencia - buscar conteudo que ele aponta
    *a = *a + 1;

}

int main (){
    int a = 10;
    f1(a);
    f2(a);
    f3(&a);

    printf("Terminei tudo, a = %d \n", a);
    return 0;

}
