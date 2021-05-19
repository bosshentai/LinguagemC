#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void swap (int *var1, int *var2){
    int temp = *var1;
    *var1 = *var2;
    *var2 = temp;
    //assert(var1 = var2);
   //assert(var2 = temp);
   //var1 = var2;
    //var1 = temp;
}


void main(){
    int var1 = 1994;
    int var2 = 2021;

     swap(&var1,&var2);

   // assert(var1 = 2021);
 //   if(assert(var1 = 2021)){
     printf("%d \n",var1);
     printf("%d \n",var2);
     
}