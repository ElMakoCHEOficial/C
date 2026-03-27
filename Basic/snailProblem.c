#include <stdio.h>
#include <stdlib.h>
int main(void) {
  long long int profund, avance, retroceso, inicio = 0, dias = 0;
  // printf("Introduce la profundidad, el avance y el retroceso: ");
  scanf("%lld %lld %lld", &profund, &avance, &retroceso);
  long long int prog=avance-retroceso;
  while (inicio < profund) {
    inicio += prog;
    dias++;
  }
  // printf("El dia en que saldra sera el dia numero (en base 0 es el 1ro): ");
  printf("%lld", dias-1);
}
