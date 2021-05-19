#include <stdio.h>
#include <stdlib.h>

// function idealWomanHeight and idealMenHeight is for return ideal height
float idealWomanHeight(float height);
float idealMenHeight(float height);

void main()
{
    /*
    * A program about peso ideal
    * sexState - if the user input a wrong answer it will repeat the  question
    */
    int sexState = 1;
    char sex;
    float height, idealHeight;

    while (sexState)
    {
        printf("\nInsira o seu sexo( m ou f): ");
        scanf("%c", &sex);
        if (sex == 'm' || sex == 'M' || sex == 'F' || sex == 'f')
        {
            sexState = 0;
        }
        else
        {
            sexState = 1;
        }
    };

    printf("\nInsira a sua altura: ");
    scanf("%f", &height);

    if (sex == 'm' || sex == 'M')
    {
        idealHeight = idealMenHeight(height);
    }

    if (sex == 'f' || sex == 'F')
    {
        idealHeight = idealWomanHeight(height);
    }

    printf("O seu peso ideial e %.2f \n", idealHeight);
}

float idealWomanHeight(float height)
{
    return (float)(62.1 * height) - 44.7;
}

float idealMenHeight(float height)
{
    return (float)(72.7 * height) - 58;
}