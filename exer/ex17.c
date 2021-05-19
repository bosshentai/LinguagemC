#include <stdio.h>
#include <stdlib.h>

void main()
{
    char fullName[20];
    int year;
    float peso;
    int alimentado, resfriado;
    //enum isAlimentado {  yes = 0  no = 1};
    //boolean isResfriado;

    printf("Insira o seu nome: ");
    fgets(fullName,20,stdin);
    printf("Insira a tua idade: ");
    scanf("%d", &year);
    printf("insira o teu peso: ");
    scanf("%f", &peso);

    if (year >= 18 && peso >= 50)
    {
        printf("Esta bem alimentado sim[0] ou nao[1] ");
        scanf("%d", &alimentado);
        printf("Estas resfriado: sim[0] ou nao[1]");
        scanf("%d", &resfriado);
        // if(alimentado == 's' && resfriado == 'n'){
        //     printf("Pode das sangue");
        // }
        if(alimentado && !resfriado){

        }
    }
}