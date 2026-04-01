#include <math.h>
#include <stdio.h>
#include <stdlib.h>
long int C_to_K(int C){
    return C+273;
}
long int C_to_F(int C){
    return 9/5*C+32;
}
long int C_to_Ran(int C){
    return 9/5*(C+273);
}
long int C_to_Reau(int C){
    return 4/5*(C+0);
}
int main(void) {
    long int C,K,F,R;
    // printf("Introduce los valores de X,Y y Z: ");
    scanf("%ld",&C);
    printf("%ld %ld %ld",C_to_K(C),C_to_F(C),C_to_Reau(C));
}
