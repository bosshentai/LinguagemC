#include <stdio.h>
#include <stdlib.h>
// Hernâni - Exercicio 27

/*
na analise a perda de massa de um mateial radioativo,sabe-se que este perde 25%
de sua massa a cada 30 segundos. Criar um programa em C 
que imprima o tempo necesasrio para que a massa (em grama) de um mateia radioativo
se torna menor que 0.10 grama.
O programa deve calcular o tempo para varias massas: enquanto o usario nao escolher
terminar o programa, ele tem a escolha de continuar o calculo para n materias/ massa

*/

void main()
{
    float massas;
    int choice;
    int cont = 0;
    int ls;
    int tempo = 30;
    float form;
    float materias;
    printf("Insira o valor da massa:");
    scanf("%f", &massas);
    ls = massas;
    while (ls > 0.10)
    {
        ls = ls - (ls * 0.25);

        cont++;
    }

    printf("O tempo gasto e %d \n", tempo * cont);

    printf("Quer saber o valor do calculo de n materias/massa : sim<1> ou nao <0> \n");
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("Insira o numero de materias: ");
        scanf("%f", &materias);

        form = (float)materias / massas;

        printf("O resultado e %.2f \n", form);
    }
}