#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

// autor: Hernâni Baptista n 4933


void main(){
    float matriz[SIZE][SIZE];

    for(int i = 0 ; i < SIZE ; i++){
        for(int j = 0 ; j < SIZE;j++){
            matriz[i][j]=  (rand() %( 40))  -20;
        }
    }

    for(int i = 0 ; i < SIZE ; i++){
        for(int j = 0 ; j < SIZE;j++){
            printf("%2.f ", matriz[i][j]);
        }
        printf("\n");
    }

       for(int i = 0 ; i < SIZE ; i++){
        for(int j = 0 ; j < SIZE;j++){
           if(matriz[i][j] <=0 ){
               matriz[i][j] = abs(matriz[i][j]);
           }
        }
        
    }

    printf("REsultado final \n");
 for(int i = 0 ; i < SIZE ; i++){
        for(int j = 0 ; j < SIZE;j++){
            printf("%2.f ", matriz[i][j]);
        }
        printf("\n");
    }
}