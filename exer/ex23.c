#include <stdio.h>
#include <stdlib.h>

/*
    uma agencia bancaria "pequena" tem no maximo 10mil clientes. Cria um programa em C que possa
    entrar com  o numero da conta, o nome e o saldo decada  cliente. Em cada iteracao, imprima
    a conta, o respectivo saldo e uma das mensagens: positivo / negativo para o balanço
*/




void main(){
    int id ;
    char fullName[20];
    float saldo; 
    int cont = 0;
    int n = 0;
    float balanco = 0;
   

    do{
        printf("Numero da conta : \n");
        scanf("%d",&id);
        if(id == 0){
            break;
        }
        getchar();
        printf("Insira o nome do: \n");
        fgets(fullName,20,stdin);

        printf("Insira o saldo da conta: \n");
        scanf("%f",&saldo);

        balanco += saldo;
        cont++;
    }while(n < 10 );


    printf("O numero de clientes: %d \n",cont);

    if(balanco >= 0){
        printf("Saldo e Positivo ");
    }else{
        printf("Saldo e Negativo");
    }



}