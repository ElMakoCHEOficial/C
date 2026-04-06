#include <stdio.h>
#include <stdlib.h>
void capturar_elem(long int arr[], long int n);
long int vectorDom(long int arr1[], long int arr2[], long int n);
int main(void) {
  long int elementos;
  scanf("%ld", &elementos);

  long int numeros1[elementos];
  long int numeros2[elementos];
  capturar_elem(numeros1, elementos);
  capturar_elem(numeros2, elementos);
  long int arr_uno_elmejor = vectorDom(numeros1, numeros2, elementos);
  printf("%ld", arr_uno_elmejor);
}

void capturar_elem(long int arr[], long int n) {
  for (long int i = 0; i < n; i++) {
    scanf("%ld", &arr[i]);
  }
}
long int vectorDom(long int arr1[], long int arr2[], long int n) {
  int mayores = 0;
  for (long int i = 0; i < n; i++) {
    if (arr1[i] > arr2[i]) {
      mayores++;
    }
  }
  if (mayores == n) {
    return 1;
  }
  return 0;
}
