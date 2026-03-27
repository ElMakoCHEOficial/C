#include <stdio.h>
#include <stdlib.h>
int main(){
    int casos,temp;
    // printf("Cuantos casos: ");
    scanf("%d",&casos);
    for (int i = 0; i < casos; i++){
        int tomacorr=0;
        int espacios=0;
        // printf("Cuantos tomacorrientes: ");
        scanf("%d",&tomacorr);
        for (int i = 0; i < tomacorr; i++){
            // printf("Cuantos espacios del #%d: ",i);
            scanf("%d",&temp);
            espacios+=temp;
        }
        // printf("Espacios disponibles: ");
        espacios=espacios-tomacorr+1;
        printf("%d\n", espacios);
    }

}
