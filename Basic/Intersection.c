#include <stdio.h> 
#include <stdlib.h>
int main(void){
    int p1,p2,p3,p4;
    // printf("Escribe el primer numero: ");
    scanf("%d %d %d %d", &p1,&p2,&p3,&p4);
    if (p1<=p3&&p3<=p2&&p2<=p4)
        printf("1");
    else if (p3<=p1&&p1<=p4&&p4<=p2)
        printf("1");
    else
            printf("0");
    return 0;
}
