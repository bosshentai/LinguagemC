#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// autor: Hernâni Baptista n 4933

// funcao swap
// parametros: 2 valores inteiro 
// descriçao: a funcao faz a troca da os valores nas variaveis 
void swap(int *var1, int *var2)
{
  int temp = *var1;
  *var1 = *var2;
  *var2 = temp;
}

void main()
{
  int var1 = 1994;
  int var2 = 2021;

  swap(&var1, &var2);

  printf("%d \n", var1);
  printf("%d \n", var2);
}