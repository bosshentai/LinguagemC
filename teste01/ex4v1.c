#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int toInt(char c){
    return c - '0';
}

int numberlen(int number){
    int count = 0;
    while(number !=0){
        number = number/10;
    }
    return count;
}


int soma(int number){
    char str[numberlen(number)];
    int final=0;
    sprintf(str,"%d",number);
    //itoa(number,str,2);

    for(int i=0; str[i] != '\0'; i++){
         //final += (int)str[i];
       // final += strtol(str[i],(char**)NULL,10);
        final += toInt(str[i]);

    }

    return final;
}


void main(){
    int number = 1994;
    int number2;
    printf("Insira um numero inteiro: ");
    scanf("%d",&number2);

    int result = soma(number);
    printf("%d \n",result);

    int result2 = soma(number2);
    printf("%d \n", result2);
}