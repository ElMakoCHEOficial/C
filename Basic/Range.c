#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int inicio, final;
  scanf("%d %d", &inicio, &final);
  for (int i = inicio; i <= final; i++) {
    printf("%d ", i);  
  }
  return 0;
}
