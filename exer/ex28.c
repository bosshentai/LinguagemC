#include <stdio.h>
#include <stdlib.h>

void main()
{
    int numero;

    do
    {
        printf("Insira um numero: \n");
        scanf("%d", &numero);
    } while ((numero % 6) != 0);

    printf("O quadrado do numero %d e %d \n", numero, numero * numero);
}