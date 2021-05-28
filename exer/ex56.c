#include <stdio.h>
#include <stdlib.h>


#define SIZE 4

//autor: Hernâni Baptista n 4933

// O objectivo e criar um matriz matriz quadrada e retornar o 
// a linha q contem o menor valor

void main(){
    int matriz[SIZE][SIZE];
    int result;
    int result2;
   

    for(int i = 0; i < SIZE ; i++){
        for(int j = 0; j < SIZE; j++){
            matriz[i][j] = rand()%20;
        }
    }

    printf("A matrix gerado \n");
    for(int i = 0; i < SIZE; i++){
        for(int j = 0 ; j < SIZE; j++){
            printf(" %d \t" ,matriz[i][j]);
        }
        printf("\n");
    }
    
   // printf("A linha q contem o menor numero \n");
    result = matriz[0][0];
    for(int i = 0; i< SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            if(result > matriz[i][j]){
                result = matriz[i][j];
                result2 = i +1;

            }
        }
    }   

    printf("O linha com o menor numero %d \n", result2);
    
}