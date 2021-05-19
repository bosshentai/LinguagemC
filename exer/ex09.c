#include <stdio.h>
#include <stdlib.h>


int double_of_4(){
      int result =  4 * 2 ;  

      return result;
}


void main (){
    int result1 = double_of_4();

    float result2 = double_of_4();

    printf("o dobro de 4 e %d \n", result1);
    printf("O dobro de 4 e %.0f \n", result2);

    
}


