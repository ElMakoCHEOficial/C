#include <stdio.h>
#include <stdlib.h>
int main(void) {
  float v_A, v_B, v_C, resul1, resul2;
  scanf("%f %f %f", &v_A, &v_B, &v_C);
  if (v_B != 0) {
    if (v_C != 0) {
      resul1 = v_A / v_B + v_C;
      resul2 = v_A / v_B - v_C;
      printf("%f %f", resul1, resul2);
    } else {
      resul1 = v_A / v_B;
      printf("%f", resul1);
    }
  } else {
    printf("indefinido");
  }

  return 0;
}
