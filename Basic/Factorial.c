#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int numeros_fact;
  long int valorTemp;
  long long int factorialTemp;
  scanf("%d", &numeros_fact);
    for (int i = 0; i < numeros_fact; i++) {
      scanf("%ld", &valorTemp);
      if (valorTemp >= 1 && valorTemp < 20) {
        factorialTemp = 1;
        for (int j = 1; j <= valorTemp; j++) {
          factorialTemp *= j;
        }
      }
      printf("%lld \n", factorialTemp);
    }
  return 0;
}

