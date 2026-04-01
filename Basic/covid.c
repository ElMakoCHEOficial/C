#include <math.h>
#include <stdio.h>
#include <stdlib.h>
long long int calc_dis(long long int x1, long long int x2, long long int y1,long long int y2) {
  return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}
void determinarSanaDist(long long int dist) {
  if (dist >= 150)
    printf("sana");
  else {
    printf("insana");
  }
}
int main(void) {
  long long int CordX1, CordX2, CordY1, CordY2, distancia;
  // printf("Introduce los valores de X,Y y Z: ");
  scanf("%lld %lld", &CordX1, &CordY1);
  scanf("%lld %lld", &CordX2, &CordY2);
  distancia = calc_dis(CordX1, CordX2, CordY1, CordY2);
  determinarSanaDist(distancia);
  return 0;
}
/*
*/
