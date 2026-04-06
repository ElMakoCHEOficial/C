#include <stdio.h>
#include <stdlib.h>
void rota(int *arr, int tam) {
    int copia = arr[tam - 1];
    for (int i = tam - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = copia;
}
int main(){
    int tam, rot;
    scanf("%d %d",&tam,&rot);
    int arr[tam];
    for (int i = 0; i < tam; i++)
        scanf("%d",&arr[i]);
    for (int i = 0; i < rot; i++)
        rota(arr,tam);    
    for (int i = 0; i < tam; i++)
        printf("%d",arr[i]);
    return 0;
}
