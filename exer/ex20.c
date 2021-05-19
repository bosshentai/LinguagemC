#include <stdio.h>
#include <stdlib.h>

void main()
{

    float numero, soma = 0;
    float media = 0;
    int i,n;

    printf("insira um numero:");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("informe o num: ");
        scanf("%f", &numero);
        soma += numero;
    }

    media = soma / n;

    printf("A media e: %f", media);
}