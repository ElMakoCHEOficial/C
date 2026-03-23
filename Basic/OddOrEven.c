#include <stdio.h> 
#include <stdlib.h>

int main(void){
    int num=0; 
    // printf("Escribe el numero: ");
    scanf("%d", &num);
    if(num%2==0)
	    printf("Even");
    else
        printf("Odd");
    return 0;
}
