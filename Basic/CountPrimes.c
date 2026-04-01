#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int ISprimo(long long int num,long long int ref){
  if (ref==1)
    return 1;
  else if (num%ref==0)
    return 0;
  else
    return ISprimo(num,ref-1);
} 
int main(void) {
  long long int  lim;
  int contP=0,sumP=0;
  // printf("Introduce los valores de X,Y y Z: ");
  scanf("%lld", &lim);
  for (long long int i = 2; i <lim; i++){
    if (ISprimo(i,i-1)){
        contP++;
        sumP+=i;
    }
  }
  printf("%d %d",contP,sumP);
  return 0;
}
