#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *fp = fopen("data.txt", "r");
    if (fp == NULL)
    {
        fprintf(stderr, "error opening file data.txt in function main()\n");
        exit(1);
    }
    fclose(fp);
    printf("Normal Return \n");
}