#include <stdio.h>
#include <stdlib.h>
void tres_n_mas_uno(long int numero, long int *cont, long int *mayor) {
  while (numero != 1) {
    if (numero % 2 == 0) {
      numero /= 2;
      (*cont)++;
      if (numero > *mayor) {
        *mayor = numero;
      }
    }else{
      numero *= 3;
      numero++;
      (*cont)++;
      if (numero > *mayor) {
        *mayor = numero;
      }
    }
  }
}

int main(void) {
  long int elcontad = 0, numero, elmayor = 1;
  scanf("%ld", &numero);
  tres_n_mas_uno(numero, &elcontad, &elmayor);
  printf("%ld %ld", elcontad, elmayor);
  return 0;
}
