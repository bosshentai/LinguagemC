#include <stdio.h>
#include <stdlib.h>

#include <math.h>

// autor: Hernâni Baptista n 4933

// funcao delta
// paramentros : 3 valores float 
// return  valor float
// descriçao: a funcao delta e calcular o valor de delta de uma 
// equaçao do segundo grau

float delta(float a, float b, float c)
{
    return pow(b, 2) - 4 * a * c;
}


// funcao bhashara
// paramentros: delta , a , b pointeiro x1 e x2
// descricao: atribuir os valores para x1 e x2 
// em x1 e parte positiva e x2 e a parte negativa 

void bhashara(float delta,float a, float b,float *x1, float *x2){
    //float x1,x2;
    *x1 = (float)( - b + sqrt(delta) )/ 2 * a;
    *x2 = ( - b - sqrt(delta) )/ 2 * a;

    // printf("x1 = %.2f \n",x1);
    // printf("x2 = %.2f \n",x2);
}

void main()
{

    float a = 4;
    float b = 30;
    float c = 4;
    float x1;
    float x2;

    float resultDelta = delta(a, b, c);
    // exer 3 pa termina qel traboi x1 e x2 

   bhashara(resultDelta,a,b,&x1,&x2);

   printf("x1 = %.2f \n",x1);
   printf("x2 = %.2f \n",x2);
}