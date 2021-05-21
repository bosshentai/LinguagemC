#include <stdio.h>
#include <stdlib.h>

// autor: Hernâni Baptista n 4933

void main()
{

    int number;
    int count = 0;

    do
    {
        printf("insira um valor superior 7 : ");
        scanf("%d", &number);

    } while (number <= 7); // garante que o usuario nao introduz um numero superior que 7

    float vector[number]; // cria o vector do tamanho que foi desejado

    for (int i = 0; i < number; i++)
    {
        printf("Insira o valor %d: ", i);
        scanf("%f", &vector[i]);
    }

    int temp = vector[0];

    for (int i = 0; i < number; i++)
    {

        for (int j = i + 1; j < number; j++)
        {

            if (vector[j] == temp)
            {
                count++; // contador de vezes numeros sa repetidos
            }
        }
        temp = vector[i];
    }

    if (count == 0)
    {
        printf("Nao existe numeros repetidos");
    }
    else
    {
        printf("Existe numeros repetidos");
    }
}