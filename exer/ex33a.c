#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct ponto
{
    float x;
    float y;
} Ponto;

// cria funcao distancia
float distancia(float x, float y)
{
    return sqrt(pow(x, 2) + pow(y, 2));
}

void main()
{
    Ponto p;
    float d;

    printf("Insira a coordenada x do ponto: ");
    scanf("%f", &p.x);
    printf("Insira a coordenada y do ponto: ");
    scanf("%f", &p.y);

    // printf(" %f ", pow(p.x, 2));
    d = distancia( p.x , p.y);

    printf("A distancia do ponto ate a origem é de %.2f ",d);
}