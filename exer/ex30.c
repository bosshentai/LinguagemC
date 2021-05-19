#include <stdio.h>
#include <stdlib.h>

void main()
{
    float matriz[4][4];

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            printf("Insira o %d nota do aluno %d :", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }

    //printf("%d", matriz);

    for (int j = 1; j <= 4; j++)
    {
        matriz[0][j] = (float)(matriz[1][j] + matriz[2][j] + matriz[3][j]) / 3;

        printf("Notas do aluno %d: %f  %f %f %f \n", j, matriz[1][j], matriz[2][j], matriz[3][j], matriz[0][j]);
    }
}
