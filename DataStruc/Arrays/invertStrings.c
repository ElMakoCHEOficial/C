#include <stdio.h>
#include <string.h>
void invertir_en_cadena(char cadena[]);
void invertir(char *caracter1, char *caracter2);
int main() {
    char palabra[1001];
    //printf("Escribe la lista de instructores: \n");
    scanf("\n %[^\n]", palabra);
    invertir_en_cadena(palabra);
    //printf("%s", palabra);
    return 0;
}
void invertir_en_cadena(char cadena[]) {
    long int inicio_p=0;
    for (long int i = 0; cadena[i]!='\0'; i++){

        if(cadena[i]==',') {
            for (long int j = i-1; j >= inicio_p; j--) {
                printf("%c", cadena[j]);
                //invertir(&cadena[j], &cadena[i-j]);
            }
            inicio_p = i + 1;
            if (cadena[i + 1] != '\0') { printf(","); }
        } else if (cadena[i+1]=='\0') {
            for (long int j = i; j>inicio_p-1; j--) {
                printf("%c", cadena[j]);
                //invertir(&cadena[j], &cadena[i-j]);
            }
            inicio_p = i + 1;
            if (cadena[i + 1] != '\0') { printf(","); }
        }
    }
    return;
}
