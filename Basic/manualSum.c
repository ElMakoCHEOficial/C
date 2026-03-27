#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int numero = 0, suma = 0, cant = 0;
  // printf("Introduce el numero: ");
  while (numero >= 0) {
    scanf("%d", &numero);
    if (numero >= 0) {
      suma += numero;
    }
    cant++;
  }
  printf("%d %d", suma, cant);
  return 0;
}
