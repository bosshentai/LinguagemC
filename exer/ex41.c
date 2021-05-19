#include <stdio.h>
#include <stdlib.h>

void main()
{
     int tamanho;
     do
     {
          printf("Insira o tamanho do vector: ");
          scanf("%d", &tamanho);
     } while (tamanho < 0);
     int vector[tamanho];

     int *vector_p = (int *)malloc(tamanho * sizeof(int));

     if (vector_p != NULL)
     {
          for (int i = 0; i < tamanho; i++)
          {
               do
               {
                    printf("Insira o valor na posicao %d ", i);
                    scanf("%d", &vector_p[i]);
               } while (vector_p[i] <= 2);
          }

          printf("O vector e :");
          for (int i = 0; i < tamanho; i++)
          {
               printf(" %d ", vector_p[i]);
          }
     }

     free(vector_p);
}