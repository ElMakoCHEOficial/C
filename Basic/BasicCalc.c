#include <stdio.h>
#include <stdlib.h>
int main(void) {
  long long int num1, num2, result;
  char operador;
  scanf("%lld %c %lld", &num1, &operador, &num2);
  int tipo_operacion = operador;
  if (num2 == 0 && (tipo_operacion == 47 ||tipo_operacion == 37)) {
    printf("indefinido");
  } else {
    switch (tipo_operacion) {
      case 37:
        result = num1 % num2;
        break;
      case 42:
        result = num1 * num2;
        break;
      case 43:
        result = num1 + num2;
        break;
      case 45:
        result = num1 - num2;
        break;
      case 47:
        result = (num1) / (num2);
        break;
      }
    printf("%lld", result);
  }

  return 0;
}
