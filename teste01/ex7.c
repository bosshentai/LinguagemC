#include <stdio.h>
#include <stdlib.h>

// autor: Hernâni Baptista n 4933

#define COLUN 9
#define ROW 9

void inic(int matriz[COLUN][ROW])
{
    int *matriz_p = (int *)malloc(COLUN * sizeof(int));
    matriz_p = matriz[0];
    for (int i = 0; i <= COLUN; i++)
    {
        for (int j = 0; j <= ROW; j++)
        {
            matriz_p[i * ROW + j] = 0;
        }
    }
}

void preenchimento(int matriz[COLUN][ROW])
{
    int number = 99;

    int *matrizPreenchimeto_p = (int *)malloc(COLUN * sizeof(int));

    matrizPreenchimeto_p = matriz[0];
    for (int i = 0; i <= COLUN; i++)
    {
        for (int j = 0; j <= ROW; j++)
        {
            matrizPreenchimeto_p[i * ROW + j] = number;
            number--;
        }
    }
}
void main()
{
    int matriz[COLUN][ROW];

    inic(matriz);

    printf("Matriz inicializada \n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d \t", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Fim da matriz inicializada \n");

    preenchimento(matriz);
    printf("Inicio do preechimento \n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d \t", matriz[i][j]);
        }
        printf("\n");
    }
    printf("Fim do preechimento \n");
}