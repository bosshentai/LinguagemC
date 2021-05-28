#include <stdio.h>
#include <stdlib.h>

//autor: Hernâni Baptista n 4933

void main(){

    int valor;
    do{
    printf("Insira um numero o valor deve ser impar: ");
    scanf("%d",&valor);
    }while(valor %2 == 0 );

   for(int i = 0; i <= (valor/2) + 1 ; i ++){
       for(int j = i+1; j <= valor -i ; j++){
            printf("%d ",j);
       }
      printf("\n");

      for(int j = 0 ; j < (i+1) * 2 ; j++){
          printf(" ");
      }
   }
}