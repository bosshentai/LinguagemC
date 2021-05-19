#include <stdio.h>
#include <stdlib.h>
// convertor de real para dolar 
float vbase;

void main(){
    float cotDolar, vlrDolar, conversao;

    printf("Digite o vlor em dolar: ");
    scanf("%f",&vlrDolar);
    printf("Digite o cotaçao do dolar: ");
    scanf("%f",&cotDolar);
    conversao = vlrDolar * cotDolar;
    printf("Conversao em reias %.2f ", conversao);
}