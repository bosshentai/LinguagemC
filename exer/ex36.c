#include <stdio.h>
#include <stdlib.h>

void main()
{
  int vec[5];
  int *pont = vec;

  for (int i = 0; i < 5; i++)
  {
    printf("valor");
    scanf("%d", &pont[i]);
  }

  for (int i = 0; i < 5; i++)
  {
    printf("%d\n", pont[i] * 2);
    //  printf("Valor do vetor %d\n",vec[i]);
  }
}