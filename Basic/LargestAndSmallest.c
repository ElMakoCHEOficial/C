#include <stdio.h>
#include <stdlib.h>
int main(void) {
  long long int numeros, temp, elmayor = INT_MIN, elmenor = INT_MAX;
  // printf("Introduce la cantidad de numeros: ");
  scanf("%lld", &numeros);
  if (numeros <= 1) {
    scanf("%lld", &temp);
    printf("%lld %lld", temp, temp);
  } else {
    for (int i = 0; i < numeros; i++) {
      // printf("Introduce el termino numero %ld", i+1);
      scanf("%lld", &temp);
      if (temp > elmayor)
        elmayor = temp;
      if (temp < elmenor) {
        elmenor = temp;
      }
    }
    printf("%lld %lld", elmayor, elmenor);
  }
  return 0;
}
