#include <stdio.h>
#include <stdlib.h>


// autor: Hernâni Baptista n 4933

#define NAMESIZE 20
#define ALUNOSIZE 2

typedef struct aluno
{
    int numMat;
    //int number;
    char name[NAMESIZE];
    float no1;
    float no2;
    float no3;
    float media;

} Aluno;


// funcao media 
// paramentro : 3 numeros decimais
// return: 1 numero decimal 
// descricao: a funcao calcula a media de 3 valores decimais .

float media(float n1, float n2, float n3)
{
    return (n1 + n2 + n3) / 3;
}

void main()
{
    Aluno aluno[ALUNOSIZE];
    //float media[ALUNOSIZE];

    for (int i = 0; i < ALUNOSIZE; i++)

    {
        do
        {
            printf("Insira numero matricula do aluno: ");
            scanf("%d", &aluno[i].numMat);
            getchar();
        } while (aluno[i].numMat <= 0);
        do
        {
            printf("Insira nome do aluno: ");
            scanf("%19s", aluno[i].name);
            // getchar();
            // fgets(aluno[i].name,NAMESIZE,stdin);
        } while (aluno[i].name == "");

        do
        {
            printf("Insira nota do primeiro teste: ");
            scanf("%f", &aluno[i].no1);

        } while (aluno[i].no1 <= 0 && aluno[i].no1 > 20);

        do
        {
            printf("Insira nota do segundo teste: ");
            scanf("%f", &aluno[i].no2);

        } while (aluno[i].no2 < 0 && aluno[i].no2 > 20);

        do
        {
            printf("Insira nota do terceiro teste: ");
            scanf("%f", &aluno[i].no3);

        } while (aluno[i].no3 < 0 && aluno[i].no3 > 20);

        aluno[i].media = media(aluno[i].no1, aluno[i].no2, aluno[i].no3);
       //aluno->media = media(aluno->no1, aluno->no2, aluno->no3);
    }

    float temp = aluno[0].media;
    int busca = 0;
    for (int i = 1; i < ALUNOSIZE; i++)
    {
        if (temp < aluno[i].media)
        {
            busca = i;
        }
    }

    printf("O aluno %s,numero %d com media %.2f", aluno[busca].name, aluno[busca].numMat, aluno[busca].media);
}