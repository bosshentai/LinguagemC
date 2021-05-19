#include <stdio.h>
#include <stdlib.h>
/*
    armazene 5 numeros difrentes do  tipo in t em um vetor apos o armazenamento o progaram dve encontrar 
*/
void main()
{
    const int LENGHT_ARRAY = 5;
    int numero[LENGHT_ARRAY];
    int maior = 0;

    for (int i = 0; i < LENGHT_ARRAY; i++)
    {
        printf("Insira um numero %d : " , i);
        scanf("%d", &numero[i]);

        // 
        if (i == 0)
        {
            maior = numero[i];
        }

        if (numero[i] > maior)
        {
            maior = numero[i];
        }
    }

    printf("O maior numero e %d \n", maior);
}