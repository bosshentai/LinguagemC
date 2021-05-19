#include <stdio.h>
#include <stdlib.h>

void main(){
    /*
    Program input int number and 
    print the  predecessor and successor 
    */
   int number1;


   printf("Insira um numero inteiro: \n");
   scanf("%d", &number1);

   printf("O antecessor do numero %d e %d \n", number1 , number1-1);
   printf("O sucessor do numero %d e %d \n", number1, number1+1);

}