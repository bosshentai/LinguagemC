#include <stdio.h>
#include <stdlib.h>

void main()
{
    int row = 4, colum = 4;
    int i, j;
    int resultado;
    int n1 = 1, n2 = 2, n3 = 3, n4 = 4;

    for (i = 1; i <= row; i++)
    {
        printf("%d \t %d \t %d \t %d \n", n1, n2, n3, n4);
        for (j = 1; j <= 1; j++)
        {
            n1 *= 2;
            n2 *= 2;
            n3 *= 2;
            n4 *= 2;
        }
    }
}