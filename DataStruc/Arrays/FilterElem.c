#include <stdio.h>
#include <stdlib.h>
void capturar_elem(long int arr[], long int n);
void filtro(long int arr1[], long int n, long int multiplo);
int main(void) {
  long int elementos, Elmultiplo;
  scanf("%ld", &elementos);
  long int numeros1[elementos];
  capturar_elem(numeros1, elementos);
  scanf("%ld", &Elmultiplo);
  filtro(numeros1, elementos, Elmultiplo);
}

void capturar_elem(long int arr[], long int n) {
  for (long int i = 0; i < n; i++) {
    scanf("%ld", &arr[i]);
  }
}
void filtro(long int arr1[], long int n, long int multiplo) {
  for (long int i = 0; i < n; i++) {
    if (arr1[i] % multiplo == 0) {
      printf("%ld ", arr1[i]);
    } else {
      printf("X ");
    }
  }
}
