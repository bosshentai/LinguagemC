#include <stdio.h>
#include <stdlib.h>

void main()
{
    char *env_p = getenv("PATH");
    if (env_p)
        printf("PATH = %s\n", env_p);
}