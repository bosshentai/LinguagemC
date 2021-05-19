#include <stdio.h>
#include <stdlib.h>


typedef struct endereco{
    char nome[30];
    int porta;
}Endereco;


typedef struct pessoa{
    char nome[30];
    int idade ;
    Endereco enderecoPessoa;

}Pessoa;


void main (){
    Pessoa pes1;

    printf("Insira o teu nome: ");
    scanf("%s",pes1.nome);
    printf("Insira a tua idade: ");
    scanf("%d",&pes1.idade);
    printf("Insira o endereco: ");
    scanf("%s", pes1.enderecoPessoa.nome);
    printf("Insira o numero da porta: ");
    scanf("%d",&pes1.enderecoPessoa.porta);

    printf("O seu nome e %s \n", pes1.nome);
    printf("A idade %d \n", pes1.idade );
    printf("O endereco %s porta %d ", pes1.enderecoPessoa.nome,pes1.enderecoPessoa.porta);
}