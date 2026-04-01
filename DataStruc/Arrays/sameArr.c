#include <stdio.h>
#include <stdlib.h>
void capturar_elem(long int arr[], long int n);
long int arreg_repet(long int arr1[], long int arr2[], long int n);
int main(void) {
  long int elementos;
  scanf("%ld", &elementos);

  long int numeros1[elementos];
  long int numeros2[elementos];
  capturar_elem(numeros1, elementos);
  capturar_elem(numeros2, elementos);
  int iguales = arreg_repet(numeros1, numeros2, elementos);
  printf("%d", iguales);
}

void capturar_elem(long int arr[], long int n) {
  for (long int i = 0; i < n; i++) {
    scanf("%ld", &arr[i]);
  }
}
long int arreg_repet(long int arr1[], long int arr2[], long int n) {
  int iguales = 0;
  for (long int i = 0; i < n; i++) {
    if (arr1[i] == arr2[i]) {
      iguales++;
    }
  }
  if (iguales == n) {
    return 1;
  }
  return 0;
}
