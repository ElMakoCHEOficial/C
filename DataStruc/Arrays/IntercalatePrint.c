#include <stdio.h>
#include <stdlib.h>
void capturar_elem(long int arr[], long int n);
void imprimir_interc(long int arr1[], long int arr2[], long int n);
int main(void) {
  long int elementos, Elmultiplo;
  scanf("%ld", &elementos);
  long int numeros1[elementos];
  long int numeros2[elementos];

  capturar_elem(numeros1, elementos);
  capturar_elem(numeros2, elementos);
  imprimir_interc(numeros1, numeros2, elementos);
}

void capturar_elem(long int arr[], long int n) {
  for (long int i = 0; i < n; i++) {
    scanf("%ld", &arr[i]);
  }
}
void imprimir_interc(long int arr1[], long int arr2[], long int n) {
  for (long int i = 1; i <= n; i++) {
    if (i % 2 == 0) {
      printf("%ld ", arr2[i-1]);
    } else {
      printf("%ld ", arr1[i-1]);
    }
  }
}
