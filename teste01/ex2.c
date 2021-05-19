#include <stdio.h>
#include <stdlib.h>



void main()
{

    int number;
    int count = 0;

    do
    {
        printf("insira um valor superior 7 : ");
        scanf("%d", &number);

    } while (number < 7);

    float vector[number];

    for (int i = 0; i < number; i++)
    {
        printf("Insira o valor %d: ", i);
        scanf("%f", &vector[i]);
    }

    int temp = vector[0];

    for (int i = 1; i < number; i++)
    {
    if (vector[i] == temp){
        count++;
    }
    temp =vector[i];
    }

    if (count == 0)
    {
        printf("Nao existe numeros repetidos");
    }else{
        printf("Existe numeros repetidos");
    }
}