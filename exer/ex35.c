#include <stdio.h>
#include <stdlib.h>

float caljur(float *saldo, float taxa)
{
    float juros = *saldo * taxa / 100;
    *saldo += juros;
    return juros;
}

void main()
{
    // juros
    // saldo
    // taxa

    float saldo, taxa;

    float resultado;

    printf("Insira o teu saldo : ");
    scanf("%f", &saldo);
    printf("insira a taxa do banco: ");
    scanf("%f", &taxa);

    resultado = caljur(&saldo, taxa);

    printf("o juro e %.2f \n", resultado);

    printf("saldo e %.2f", saldo);
}