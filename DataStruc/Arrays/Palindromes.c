#include <stdio.h>
#include <string.h>
void palindromos(char cadena[]);

int main() {
    char palabra[1001];
    //printf("Escribe la lista de instructores: \n");
    scanf("\n %[^\n]", palabra);
    palindromos(palabra);
    return 0;
}

void palindromos(char cadena[]) {
    long int elem_Ig = 0;
    for (long int i = 0; i< (strlen(cadena))/2; i++) {
        if(cadena[i] != cadena[strlen(cadena)-1-i]){
            printf("No");
            return;
        }
    }
    printf("Si");
    return;
}
