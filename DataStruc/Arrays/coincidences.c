#include <stdio.h>
#include <string.h>
long int coincidencias(char cadena[]);

int main() {
    char palabra[1001];
    //printf("Escribe la lista de instructores: \n");
    scanf("\n %[^\n]", palabra);
    printf("%ld", coincidencias(palabra));
    return 0;
}

long int coincidencias(char cadena[]) {
    long int Lascoincidencias=0;
    char cadena_inv[strlen(cadena)];
    for (long int i = 0; i< (strlen(cadena)); i++) {
        cadena_inv[i] = cadena[strlen(cadena)-1-i];
    }
    //printf("%s", cadena_inv);
    for(long int i =0;i< strlen(cadena);i++){
        if((cadena[i])==(cadena_inv[i])||(cadena[i]+32)==(cadena_inv[i])||(cadena[i])==(cadena_inv[i]-32)
        ||(cadena[i]-32)==(cadena_inv[i])||(cadena[i])==(cadena_inv[i]+32)
        ){
            Lascoincidencias++;
        }
    }

    return Lascoincidencias;
}
