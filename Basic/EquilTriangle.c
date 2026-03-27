#include <stdio.h> 
#include <stdlib.h>
int main(void){
    int num1,num2,num3,num4;
    scanf("%d %d %d %d", &num1,&num2,&num3,&num4);
    if (num1==num2&&num2==num3){
        printf("1");
    }else if (num4==num2&&num2==num3){
        printf("1");
    }else if (num4==num1&&num1==num3){
        printf("1");
    }else if (num2==num1&&num1==num4){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}
