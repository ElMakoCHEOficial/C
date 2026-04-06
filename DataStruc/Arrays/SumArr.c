#include <stdio.h>
#include <stdlib.h>
void capturar_elem(long int arr[], long int n);
void sumar_arr(long int arr1[], long int arr2[], long int n);

int main(void) {
  long int elementos;
  scanf("%ld", &elementos);

  long int numeros1[elementos];
  long int numeros2[elementos];
  capturar_elem(numeros1, elementos);
  capturar_elem(numeros2, elementos);
  sumar_arr(numeros1, numeros2, elementos);
  // printf("%d", iguales);
}

void capturar_elem(long int arr[], long int n) {
  for (long int i = 0; i < n; i++) {
    scanf("%ld", &arr[i]);
  }
}

void sumar_arr(long int arr1[], long int arr2[], long int n) {
  long int arreglo3[n];
  for (long int i = 0; i < n; i++) {
    arreglo3[i] = arr1[i] + arr2[i];
  }
  for (long int i = 0; i < n; i++) {
    printf("%ld ", arreglo3[i]);
  }
}
