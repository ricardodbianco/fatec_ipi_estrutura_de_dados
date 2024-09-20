 
#include "vetor.h"

void preenche_vetor(int *v, int t){
    for (int i =0; i<t; i++)
        v[i] = rand() % (t*10);
     
}

void exibe_vetor(int *v, int t, char *msg) {
    printf("\n%s\n", msg);
    for (int i =0; i<t; i++){
        printf (" %d ", v[i]);
    }
    printf("\n");    
}

void soma_vetores(int *v1, int *v2, int *vs, int t){
    
    for (int i =0; i<t; i++){
        vs[i] = v1[i] + v2[i];
    }

}

void bubblesort(int*v , int n){
 for(int i=1; i < n; i++){
    for(int j=0; j < n - i; j++){
        if (v[j] > v[j+1]){
            int aux = v[j];
            v[j] = v[j+1];
            v[j+1] =aux;
        }
    }

 }
}

void insertionsort (int*v, int n){
    int i, j;
    for( i=1; i<n; i++){
        int x = v[i];
        for( j=i-1; j>= 0 && v[j]>x;j--){
            v[j+1] = v[j];


        }
        v[j+1] = x;


    }

}

void selectionsort(int*v, int n){
    //loop percorre cada elemento do vetor, menos o ultimo
    // o i representa a posição atual onde o menor elemento será colocado 
    for(int i = 0; i < n-1; i++){
        int min = i;

        //percorre os elementos restantes do vetor 
        //encontrar o menor elemento no vetor não ordenado
        for(int j = i+1; j < n; j++){

            //se o elemento v[j] for menor que v[min]
            if(v[j] < v[min]){
                //então min será atualizado para j
                min = j;
            }     
        }
        // Troca o menor elemento encontrado com o elemento na posição i
        int x = v[i]; 
        v[i] = v[min]; 
        v[min] = x;

    }
}