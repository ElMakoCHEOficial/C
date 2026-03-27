#include <stdio.h> 
#include <stdlib.h>
int main(void){
    double x,y,z,res1,res2;
    // printf("Escribe el primer numero: ");
    scanf("%lf %lf %lf", &x,&y,&z);
    res1=((2*x+y)/(z)*(y*y*y-z))/((x+2*y+3*z)/(z-2*y-3*x)+x*x+z*z);
    printf("%lf", res1,res2);
    return 0;
}

