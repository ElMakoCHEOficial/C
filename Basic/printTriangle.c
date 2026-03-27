#include <stdio.h>
#include <stdlib.h>
void TRIANG_rec(int base, int espacios){
  if (base == 1){
    for (int i = 0; i < (espacios); i++)
      printf(" ");
    printf("X\n");
  }
  else{
    TRIANG_rec(base - 2, espacios + 1);
    for (int i = 0; i < (espacios); i++)
      printf(" ");
    for (int i = 0; i < base; i++)
      printf("X");
    printf("\n");
  }
}
int main(void){
  long long int numeros;
  // printf("Introduce la cantidad de numeros: ");
  scanf("%lld", &numeros);
  int espacios = numeros / 2;
  for (int i = 0; i < numeros - i; i++){
    for (int j = 0; j < espacios; j++)
      printf(" ");
    for (int j = 0; j < 2 * i + 1; j++)
      printf("@");
    if(espacios!=0)
      printf("\n");
    espacios--;
  }
  espacios = 0;
  TRIANG_rec(numeros, espacios);
  return 0;
}
