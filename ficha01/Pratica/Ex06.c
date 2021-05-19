#include <stdio.h>
#include <stdlib.h>


float convertCelsiusToFahrenheit(float celsius){
    return ((celsius * 9)/ 5)+ 32;
}

void main(){
    /* 
    * Program Convert Celsius to Fahrenheit
    */ 

   float celsius;

   printf("Insiro o valor em Celsius: \n");
   scanf("%f",&celsius);

   printf("O resultado em fahrenheit e %.2fF \n",convertCelsiusToFahrenheit(celsius));
}