#include <stdio.h>

void sum() {
    int a, b;
    scanf("%d", &a);	
    scanf("%d", &b);
	int res=a+b;
    printf("%d",res);
}
void multiply() {
    int a, b;
    scanf("%d", &a);	
    scanf("%d", &b);
    int res=a*b;
    printf("%d",res);
}

int main() {
    printf("¡Hola, mundo!\n");
    sum();
    return 0;
}
