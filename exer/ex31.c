#include <stdio.h>
#include <stdlib.h>

void main()
{
    int matriz[4][4];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            do{
            printf("insira um numero de celula [%d][%d] : ", i, j);
            scanf("%d", &matriz[i][j]);
            }while(matriz[i][j] == 0);
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d \t", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Matriz de nuermos impares \n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if(matriz[i][j]%2 == 0 ){
                matriz[i][j] = 0;
            }
            printf("%d \t", matriz[i][j]);
        }
        printf("\n");
    }
}