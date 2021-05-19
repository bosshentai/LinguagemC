#include <stdio.h>
#include <stdlib.h>
// Hernâni - exercicio 29

/*
FAzer um programa e um demo de calculadora 
primeira opcao e para adicionar n valores 
segundo opcao e para multiplicar n valores 
terceira opcao e terminar o programa
*/
void main()
{
    int choice;
    float numero;
    float somatorio;
    float produto;
    do
    {

        printf("1-SOMA VARIOS NUMEROS\n");
        printf("2-MULTIPLICAR  VARIOS NUMEROS\n");
        printf("3-SAI DO PROGRAMA\n");
        printf("OPCAO: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            somatorio = 0;
            do
            {

                printf("Insira um numero ou 0 para sair: \n");
                scanf("%f", &numero);
                somatorio += numero;
                printf("O Somatorio e %.2f \n", somatorio);
            } while (numero != 0);
        }

        if (choice == 2)
        {
            produto = 1;
            do
            {
                printf("Insira um numero ou 0 para sair: \n");
                scanf("%f", &numero);
                produto *= numero;
                printf("O Produto e %.2f \n", produto);
            } while (numero != 0);
        }
    } while (choice != 3);
}