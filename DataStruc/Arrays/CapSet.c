#include <stdio.h>
#include <stdlib.h>
void capturar_elem(long int arr[], long int n);
void deter_conj_capi(long int arr1[], long int n);
int main(void) {
  long int elementos, Elmultiplo;
  scanf("%ld", &elementos);
  long int numeros1[elementos];
  capturar_elem(numeros1, elementos);
  //  capturar_elem(numeros2, elementos);
  deter_conj_capi(numeros1, elementos);
}

void capturar_elem(long int arr[], long int n) {
  for (long int i = 0; i < n; i++) {
    scanf("%ld", &arr[i]);
  }
}
void deter_conj_capi(long int arr1[], long int n) {
  long int extr_iguales = 0;
  long int j = n - 1;
  long int i = 0;
  while (i < j) {
    //  printf("%ld ", arr1[i] + arr1[j]);
    if (arr1[i] == arr1[j]) {
      extr_iguales++;
    }
    i++;
    j--;
  }
  if (extr_iguales == n / 2) {
    printf("SI");
  } else {
    printf("NO");
  }
}
