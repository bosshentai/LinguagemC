#include <stdio.h>
#include <stdlib.h>

#include <math.h>

float delta(float a, float b, float c)
{
    return pow(b, 2) - 4 * a * c;
}

void bhashara(float delta,float a, float b){
    float x1,x2;
    x1 = (float)( - b + sqrt(delta) )/ 2 * a;
    x2 = ( - b - sqrt(delta) )/ 2 * a;

    printf("x1 = %.2f \n",x1);
    printf("x2 = %.2f \n",x2);
}

void main()
{

    float a = 4;
    float b = 30;
    float c = 4;

    float resultDelta = delta(a, b, c);
    // exer 3 pa termina qel traboi x1 e x2 

   bhashara(resultDelta,a,b);
}