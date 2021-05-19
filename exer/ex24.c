#include <stdio.h>
#include <stdlib.h>

/*
Armazene 10 numeros diferentes do tipo do tipo int em um vetor array_10_NUM e imprima 
uma listagem dos numeros lidos e a soma desses numeros.
*/
void main(){
    const int lengthArray = 10;
    int array_10_NUM[lengthArray];
    int soma = 0;

    for(int i = 0; i < lengthArray; i++){
        printf("Insira numeros %d: ", i);
        scanf("%d",&array_10_NUM[i]);

        soma += array_10_NUM[i];
    }

    printf("Soma: %d \n", soma);

}