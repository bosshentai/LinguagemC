#include <stdio.h>
#include <stdlib.h>

int resultNum(int numero);

void main(){

    int numero, resultFinal;

    printf("Insira um numero:");
    scanf("%d",&numero);

    resultFinal = resultNum(numero);

    printf("Resultado: %d \n",resultFinal);
}


int resultNum(int numero){

    if( numero > 20){return numero * 2;}

    return numero * 4;
}