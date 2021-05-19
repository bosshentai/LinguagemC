#include <stdio.h>
#include <stdlib.h>

void main(){
    /*Exercicio 1 */
    int x1 = 5;
    int y1 = 12;
    int final1 = y1 & x1;

    /*Exercicio 2 */
    int x2 = 7;
    int y2 = 8;
    int final2 = x2 | y2;

    /* Exercicio 3 */
     int x3 = 13;
    int y3 = 11;
    int final3 = x3 ^ y3;

    /* Exercicio 4 */
     int x4 = 4;
    int y4 = 2;
    int final4 = x4 << y4;

    /* Exercicio 5 */
     int x5 = 14;
    int y5 = 3;
    int final5 = x5 >> y5;

    printf("Exercicio 1 \n");
    printf("x = %d y = %d \nfinal = y1 & x1 =  %d \n", x1, y1, final1 );

    printf("Exercicio 2 \n");
    printf("x = %d y = %d \nfinal = y1 | x1 =  %d \n", x2,y2,final2);

    printf("Exercicio 3 \n");
    printf("x = %d y = %d \nfinal = y1 ^ x1 =  %d \n", x3,y3,final3);

    printf("Exercicio 4 \n");
    printf("x = %d y = %d \nfinal = y1 << x1 =  %d \n", x4,y4,final4);

    printf("Exercicio 5 \n");
    printf("x = %d y = %d \nfinal = y1 >> x1 =  %d \n", x5,y5,final5);
}