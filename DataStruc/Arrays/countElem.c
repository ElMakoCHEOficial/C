#include <stdio.h>
#include <stdlib.h>
void capturar_elem(long int arr[], long int n) {
  for (long int i = 0; i < n; i++) {
    scanf("%ld", &arr[i]);
  }
}
long int contar_repet(long int arr[], long int n, long int elem_dup) {
  int sumat = 0;
  for (long int i = 0; i < n; i++) {
    if (arr[i] == elem_dup) {
      sumat++;
    }
  }
  return sumat;
}
int main(void) {
  long int elementos, elem_dupp;
  scanf("%ld", &elementos);

  long int numeros[elementos];
  capturar_elem(numeros, elementos);
  scanf("%ld", &elem_dupp);

  elem_dupp = contar_repet(numeros, elementos, elem_dupp);
  printf("%d", elem_dupp);
}
