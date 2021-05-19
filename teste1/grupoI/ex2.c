#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *baralhar(char *s);

void main()
{
    char frase[] = "ATACAR AO AMANHACER";
    char *teste;

    //char frase1[] = frase[5];

    //char teste [] = *baralhar(frase);
    teste = baralhar(frase);

    printf("%s \n",teste);


    free(teste);

    // for (int i = 0; i < strlen(frase); i++)
    // {
    //     printf("%c", teste[i]);
    //     // printf("%s", frase);
    // }
}

char *baralhar(char *s)
{
    int len = strlen(s);
    int len1 = len / 2;
    int len2 = len - len1;
    int count2 = 0;
    int count =0;

    // char *s1 = (char *)malloc(len1 * sizeof(char));
    char *s1 = malloc(len1 * sizeof(char));

    
    char *s2 = malloc(len2 * sizeof(char));
   
    char *sfinal = malloc((len1 + len2 +  len)* sizeof(char));
    

    for (int i = 0; i < len1; i++)
    {
        //s1[i] = *(s + i);
        s1[i] = s[i];
    }

    for (int i = len2; i < len; i++)
    {
      
        s2[count2++] = s[i];
    }

    for (int i = 0; i <= len; i++)
    {

        sfinal[count] = s1[i];
        count++;
        sfinal[count] = s2[i];
        count++;
    }

    //sfinal[count] = '\0';
    return sfinal;
}