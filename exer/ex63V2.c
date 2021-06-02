#include<stdio.h>
#include <stdlib.h>

void main(){
    
    int size;



    printf("Insira o tamanho da matriz quadrada: ");
    scanf("%d",&size);

    float matrizA[size][size];
    float matrizB[size][size];

    for(int i = 0; i < size;i++){
        for(int j = 0; j < size; j++){
        printf("Insira o valor da matrizA[%d][%d] = ",i+1,j+1);
        scanf("%f",&matrizA[i][j]);
        }
    }

    printf("matriz A \n");
      for(int i = 0; i < size;i++){
        for(int j = 0; j < size; j++){
        printf("%f\t",matrizA[i][j]);
        
        }
        printf("\n");
    }


    for(int i = 0 ; i < size; i++){
        float diagonal;
        for(int j = 0 ; j < size; j++){
            if(i == j){
                diagonal = matrizA[i][j];
            }

        }

         for(int j = 0 ; j < size; j++){
            matrizB[i][j] = matrizA[i][j] * diagonal;
        }

    }

    printf("matriz B \n");
      for(int i = 0; i < size;i++){
        for(int j = 0; j < size; j++){
        printf("%f\t",matrizB[i][j]);
        
        }
        printf("\n");
    }

}