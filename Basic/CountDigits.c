#include <stdio.h>
#include <stdlib.h>
int main(void) {
  long long int numero;
  int digits = 0;
  // printf("Introduce el numero: ");
  scanf("%lld", &numero);
  if (numero<0){
    numero*=-1;
  }
  if (numero == 0||numero<10) {
    printf("1");
  } else {
    while (numero > 0) {
      numero = numero / 10;
      digits++;
    }
    // printf("El numero de digitos es :");
    printf("%d", digits);
  }
  return 0;
}
