#include <stdio.h>
#include <stdlib.h>

void main(){
     int tamanho;

    printf("Insira o tamanho do vector: ");
    scanf("%d",&tamanho);

    int vector[tamanho];

    int *vector_p = (int *) malloc(tamanho * sizeof(int));

    if ( vector_p == NULL){

    }

    if ( vector_p != NULL){
    for(int i = 0; i < tamanho ; i++){
        printf("Insira o valor na posicao %d ", i);
        scanf("%d", &vector_p[i]);
    }

    printf("O vector e :");
     for(int i = 0; i < tamanho ; i++){
        printf(" %d " ,vector_p[i]);
    }
    }

    free(vector_p);

}