#include <stdio.h>
#include <math.h>

/*
Hernâni Baptista - ex33b
*/

typedef struct ponto
{
    float x;
    float y;

} Ponto;

typedef struct rectangulo
{
    Ponto SE; // superior esquerdo - A
    Ponto ID; // inferior direito - C
    Ponto SD; // superior direito - B
    Ponto IE; // inferior esquerdo - D
} Rectangulo;

float area(float base, float altura)
{
    return base * altura;
}

float perimetro(float base, float altura)
{
    return base * 2 + altura * 2;
}

float distancia2p(Ponto ponto1, Ponto ponto2)
{
    return sqrt( pow((ponto2.x - ponto1.x),2) + pow((ponto2.y - ponto1.y), 2));
}

void main()
{
    Rectangulo r;
    float base, altura;
    printf("Insira a coor x do ponto SE do rect:");
    scanf("%f", &r.SE.x);
    printf("Insira a coor Y do ponto SE do rect:");
    scanf("%f", &r.SE.y);
    printf("Insira a coor X do ponto ID do rect:");
    scanf("%f", &r.ID.x);
    printf("Insira a coor Y do ponto ID do rect:");
    scanf("%f", &r.ID.y);

    r.SD.x = r.ID.x; // B.x
    r.SD.y = r.SE.y; // B.y

    r.IE.x = r.SE.x; // C.x
    r.IE.y = r.ID.y; // C.y

    base = distancia2p(r.ID,r.IE);
    altura = distancia2p(r.IE,r.SE);


    printf("A area do retangulo e %.2f \n", area(base,altura));
    printf("O comprimento diagonal do retangulo e %.2f \n", distancia2p(r.SE,r.ID));
    printf("O perimetro do retangulo e %.2f \n", perimetro(base,altura));
}