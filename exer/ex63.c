#include <stdio.h>
#include <stdlib.h>

#define MAX 1000

void teste(float matrizA[MAX][MAX], int size, float matrizB[MAX][MAX])
{

    float *matrizA_p = (float *)malloc(size * sizeof(float));
    matrizA_p = matrizA[0];

    float *matrizB_p = (float *)malloc(size * sizeof(float));
    matrizB_p = matrizB[0];
    for(int i = 0; i < size; i++){
        float diagonal;
        for(int j = 0; j < size; j++)
        {
            // printf("%f",matrizA_p[i * size + j]);
            // printf("\n");
            if(i == j){
                diagonal = matrizA_p[i*size + j];
            }
        }
        //printf("Diagonal number %.2f \n", diagonal);

        for(int j = 0; j< size; j++){
            matrizB_p[i* size + j] = matrizA_p[i * size+j] * diagonal;
        }
    }
}

void main()
{
    int size;
    printf("Insira o tamanho da matriz quadrada:");
    scanf("%d", &size);

    float matrizA[size][size];
    float matrizB[size][size];

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("Insira o valor da matrizA[%d][%d] = ", i + 1, j + 1);
            scanf("%f", &matrizA[i][j]);
        }
    }

     printf("matriz A \n");
      for(int i = 0; i < size;i++){
        for(int j = 0; j < size; j++){
        printf("%.2f\t",matrizA[i][j]);
        
        }
        printf("\n");
    }

    teste(matrizA, size, matrizB);

    printf("matriz B \n");
      for(int i = 0; i < size;i++){
        for(int j = 0; j < size; j++){
        printf("%.2f\t",matrizB[i][j]);
        
        }
        printf("\n");
    }
    
}