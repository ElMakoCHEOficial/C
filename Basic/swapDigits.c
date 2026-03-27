#include <stdio.h> 
#include <stdlib.h>
int main(void){
    long int num1,num_inv=0;
    scanf("%lld", &num1);
    for (; num1>0; num1/=10)
        num_inv=num_inv*10+num1%10;
    printf("%d", num_inv);
    return 0;
}
