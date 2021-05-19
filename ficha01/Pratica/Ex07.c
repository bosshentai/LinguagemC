#include <stdio.h>
#include <stdlib.h>

float distanceHours(float time, float speed)
{
    // Function to calculate the distance traveled in hours
    // 2 paraments time  and average speed
    return time * speed;
}

float litersConsumed(float distanceHours)
{
    // Function  liters of fuel consumed
    // 1 parament distance traveled in hours
    return distanceHours / 12;
}

void main()
{
    /*
    * Program to calculate the amount of liters of fuel a car consumes on a trip 
    */

    float time, vel, distance;

    printf("Insira o tempo percorrido: \n");
    scanf("%f", &time);

    printf("insira a velocidade media: \n");
    scanf("%f", &vel);

    distance = distanceHours(time, vel);

    printf("A distancia percorrida foi de %.2f\n", distance);
    printf("A quantidade de litros consumidos na viagem e %.2f Litros \n", litersConsumed(distance));
}