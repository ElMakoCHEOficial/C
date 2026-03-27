#include <stdio.h>
#include <stdlib.h>
int main(void){
    int num1, num2, num3, elMayormenoraCien;
    scanf("%d %d %d", &num1, &num2, &num3);
    elMayormenoraCien = 0;
    if (elMayormenoraCien < num1 && num1 < 100)
        elMayormenoraCien = num1;
    if (elMayormenoraCien < num2 && num2 < 100)
        elMayormenoraCien = num2;
    if (elMayormenoraCien < num3 && num3 < 100)
        elMayormenoraCien = num3;
    printf("%d", elMayormenoraCien);
    return 0;
}
