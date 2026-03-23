#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int numero;
    // printf("Dame el número\n");
    scanf("%d", &numero);
    int sumat = 0;
    int cont = 0;
    while (cont <= numero){
        sumat += cont; 
        cont++;
    }    
    printf("%d", sumat);
    return 0;
}
