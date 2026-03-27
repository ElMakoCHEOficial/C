#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int cant, corazones;
  // printf("Introduce la cantidad de lineas: ");
  scanf("%d", &cant);
  for (int i = 0; i < cant; i++) {
    // printf("Introduce la cantidad de corazones: ");
    scanf("%d", &corazones);
    for (int j = 0; j < corazones; j++) {
      printf("<3");
    }
     printf("\n"); 
  }
}
