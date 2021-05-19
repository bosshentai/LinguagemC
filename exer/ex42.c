// crie uma funcao que receba um texto ate 20 e retorne o ponteiro para esses texto invertido
// Dica funcao strlen(texto) do vib string.h retorno o tamanho do texto.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// autor:  Hernâni Baptista

#define TAMANHO 20

char *inverter(char *texto);

void main()
{

    char texto[TAMANHO];
    char *str2;

   

    printf("Insira um texto de maximo %d ", TAMANHO);
    fgets(texto, TAMANHO, stdin);

    //strrev(texto);
    str2 = inverter(texto);

    printf("%s \n", str2);

    free(str2);
}

char *inverter(char *texto)
{
    //strrev(texto);
    int i, j = 0;
    const int lenTexto = strlen(texto);

    char *texto2 = malloc(lenTexto * sizeof(char));

    for (i = lenTexto - 1; i >= 0; i--)
    {
        texto2[j] = texto[i];
        j++;
    }

    texto2[j] = '\0';
    return texto2;

}