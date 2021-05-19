#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Hernâni Baptista - ex33b
*/

typedef struct ponto
{
    float x;
    float y;

} Ponto;

float distancia2p(Ponto ponto1, Ponto ponto2)
{
    return sqrt(pow((ponto2.x - ponto1.x), 2) + pow((ponto2.y - ponto1.y), 2));
}

void main()
{
    Ponto p1, p2;
    float d;

    printf("Insira a coordenada x do primeiro ponto: ");
    scanf("%f", &p1.x);
    printf("Insira a coordenada y do primeiro ponto: ");
    scanf("%f", &p1.y);
    printf("Insira a coordenada x do primeiro ponto: ");
    scanf("%f", &p2.x);
    printf("Insira a coordenada y do primeiro ponto: ");
    scanf("%f", &p2.y);
    d = distancia2p(p1,p2);

    printf("A distancia entre os 2 pontos e %.2f ", d);
}