#include <stdio.h>
#include <stdlib.h>

float area_triangule(float base , float height) {
    return (base * height) / 2 ;
}

void main(){

    float base, height, area; 

    printf("Insira o base e a altura do triangulo \n");
    scanf("%f %f", &base,&height);

    area = area_triangule(base,height);

    printf("A area do triangulo e %3.2f \n",area);
}