#include <stdio.h>
#include <stdlib.h>

#define COLUN 9
#define ROW 9

// void inic(int **matriz)
// {

//      matriz = malloc(9 * sizeof(int *));
//     //matriz_p = matriz;
//     for (int i = 0; i < 10; i++)
//     {
//         matriz[i] = malloc(9 * sizeof(int *));
//         for (int j = 0; j < 10; j++)
//         {
//             matriz[i][j] = 0;
//         }
//     }
// }

void inic(int matriz[COLUN][ROW])
{
    //void inic (int matriz){
    int *matriz_p = (int *)malloc(COLUN * sizeof(int));
    // matriz_p = matriz;
    // matriz_p = &matriz[0][0];
    // matriz_p = &matriz[0];
    matriz_p = matriz[0];
    for (int i = 0; i <= COLUN; i++)
    {

        for (int j = 0; j <= ROW; j++)
        {
            //matriz_p[i][j] = 0;
            matriz_p[i * ROW + j] = 0;
        }
    }
}

// void preech(int **matriz)
// {
//     int number = 99;

//     matriz = (int **)malloc(9 * sizeof(int *));
//     for (int i = 0; i <= 9; i++)
//     {
//         matriz[i] = (int *)malloc(9 * sizeof(int *));
//         for (int j = 0; j <= 9; j++)
//         {
//             matriz[i][j] = number;
//             number--;
//         }
//     }
// }

void preenchimento(int matriz[COLUN][ROW])
{
    int number = 99;

    int *matrizPreenchimeto_p = (int *)malloc(COLUN * sizeof(int));

    matrizPreenchimeto_p = matriz[0];
    for (int i = 0; i <= COLUN; i++){
        for (int j = 0 ; j <= ROW;j++){
            matrizPreenchimeto_p[i* ROW + j] = number;
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
    //   preech(**matriz);

    //  for (int i = 0; i <= 9; i++)
    // {
    //     for (int j = 0; j <= 9; j++)
    //     {
    //          printf(" %d ",matriz[i][j]);
    //         //printf(" %d ", matriz[i][j]);
    //         //printf("%d", *(matriz+(i)+j));
    //     }
    //     printf("\n");
    // }
}