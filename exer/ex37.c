#include <stdio.h>
#include <stdlib.h>

/*
Hernâni Baptista - ex37
*/

int mulplicar(const int *vec, int numero){
    return *vec * numero;
}

/*
programa que pode um multiplicador ( valor inteiro)
input um numero inteiro
input um vector de 5 inteiros. 
output -  vector  e multiplicado pelo numero.
*/



void main(){
    int vec[5];
    int numero;

    printf("Insira o valor que vai multiplicar: ");
    scanf("%d",&numero);

    for(int i =0; i < 5; i++ ){
        printf("Insiro o valor %d: ",i);
        scanf("%d",&vec[i]);
    }

    for(int i = 0; i < 5; i++){
        printf("O resultado e %d \n", mulplicar(&vec[i],numero));
    }

    
}