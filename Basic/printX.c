#include <stdio.h>
#include <stdlib.h>


int main(void)
{
  int numero;
  // printf("Introduce el numero: ");
  scanf("%d", &numero);
  for (int i = 0; i < numero; i++)
  {
    for (int j = 0; j < numero; j++)
    {
      if (j == i)
      {
        printf("@");
      }
      else
      {
        if (j == (numero - i - 1))
        {
          printf("@");
        }
        else
        {
          printf(" ");
        }
      }
    }
    printf("\n");
  }
  return 0;
}
