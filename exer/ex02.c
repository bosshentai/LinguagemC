# include <stdio.h>
# include <string.h>

int main (){
    char alunos1[20] = "Aline\t\t9.0\n";
    char alunos2[20] = "Mário\t\tDEZ\n";
    char alunos3[20] = "SÉRGIO\t\t4.5\n";
    char alunos4[20] = "SHIRLEY\t\t7.0\n";

    printf(" AlUNO(A) \t NOTA\n");
    printf("======= \t ======\n");
    
    printf("%s", alunos1);
    printf("%s", alunos2);
    printf("%s", alunos3);
    printf("%s", alunos4);

    return 0;
}