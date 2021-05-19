#include <stdio.h>
#include <stdlib.h>


struct UnidadeCurricular
{
    char sigla[6];
    char nomeUC[50];
    int ano;
    int semestre;
    struct UnidadeCurricular *proximo;
};
