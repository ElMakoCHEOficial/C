#include <stdio.h>
#include <stdlib.h>
int main(void) {
  float grados_C;
  float grados_F;
  scanf("%f", &grados_C);
  grados_F = 9 / 5.0 * grados_C + 32;
  printf("%.8f", grados_F);
  return 0;
}
