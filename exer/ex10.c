#include <stdio.h>
#include <stdlib.h>


void main(){
    int num1;
    int num2;
    int result;

    printf("Insira o primeiro numero\n");
    scanf("%d",&num1);

    printf("insirra o segundo numero\n");
    scanf("%d", &num2);

    result = num1 + num2;

    printf("O resultado e %d\n", result);

}