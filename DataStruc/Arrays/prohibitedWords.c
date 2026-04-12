#include <stdio.h>
#include <string.h>
void palabras_prohibidas(char cadena[], char palabras_prohibidas[]);
int main() {

    char frase[1001], restricciones[1001];
    //printf("Escribe la lista de instructores: \n");
    scanf("\n %[^\n]", frase);
    scanf("\n %[^\n]", restricciones);
    palabras_prohibidas(frase,restricciones);
    return 0;
}

void palabras_prohibidas(char cadena[],char palabras_prohibidas[]) {
    long int elem_Ig=0;
    for (long int i=0;cadena[i]!='\0';i++){
        if(cadena[i]==palabras_prohibidas[0]){
            elem_Ig=0;
            for(long int j=0;j< strlen(palabras_prohibidas);j++){
                if(cadena[i+j]==palabras_prohibidas[j]){
                    elem_Ig++;
                }
            }
            if (strlen(palabras_prohibidas)==elem_Ig){
                for(long int j=0;j< strlen(palabras_prohibidas);j++){
                    cadena[i+j]=' ';
                    }
                }
            }
        }
    printf("%s", cadena);
    }
