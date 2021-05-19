#include <stdio.h>
#include <stdlib.h>

void main(){
    /*Program with 2 inputs double/float 
     use the 4 basic operator 
     */

    double num1, num2;
    double sum,sub;
    float  multi,div;

    printf("Digite 2 valores reais :\n");
    scanf("%lf %lf", &num1,&num2);

    sum = num1 + num2;
    sub =  num1 - num2;
    multi =  num1 * num2;
    div = num1 / num2;

    printf("A soma de %.2f e %.2f e %.2f\n",num1,num2,sum);
    printf("A subtracao de %.2f e %.2f e %.2f\n",num1,num2,sub);
    printf("A multiplicacao  de %.2f e %.2f e %.2f\n",num1,num2,multi);
    printf("A divisao de %.2f e %.2f e %.2f\n",num1,num2,div);
    
}