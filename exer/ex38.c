#include <stdio.h>
#include <stdlib.h>

/*
Hernâni Baptista - ex38
*/


/*
Exercicio para encontrar os 2 maiores numeros de um vector 
*/

// a funcao maioir inicialmente organiza o vector por ordem descrecente
// os 2 primeiros valores do vector sao atribuidos  valor3 e valor 4
void maior2(int *vector, int *valor3 , int *valor4){
        int temp;
        for(int i = 0; i < 4; i++){
            for(int j= i; j < 4; j++){
                if(vector[i] < vector[j]){
                    temp = vector[i];
                    vector[i] = vector[j];
                    vector[j] = temp;
                }
            }
        }
        *valor3 = vector[0];
        *valor4 = vector[1];
        // return *valor3 , *valor4;
}

void main()
{
    int vector[4];
    int val1, val2;

    for (int i = 0; i < 4; i++)
    {
        printf("insira o Valor %d:",i);
        scanf("%d",&vector[i]);

    }

    maior2(vector,&val1,&val2);

    printf("Os maiores numeros sao %d  e %d", val1,val2);
}