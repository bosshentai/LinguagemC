#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Um codigo que leia 10 numeros positivos e imprima o quadrado de cada numero. Para cada entrada
de dados devera haver  um trecho de validacao para que um numero negativo nao seja acetuo pelo 
programa. O programa so terminara somente apos a leitura desses 10 numeros positivos.
*/

void main(){
    float num;
    int cont = 0;
    float c;
    while(cont < 10){
        printf("Insira o numero positivos: \n");
        scanf("%f",&num);

        if(num > 0){
            c = (float) pow(num,2);
            printf("O valor e : %.0f \n",c );
            cont++;
        }
    }

    

}