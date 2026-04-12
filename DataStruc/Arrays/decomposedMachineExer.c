#include <stdio.h>
#include <ctype.h>

void corregirMayusculas(char* cadena) {
    int mayuscula = 1;  // Indica si la próxima letra debe ser mayúscula

    for (int i = 0; cadena[i] != '\0'; i++) {
        if (cadena[i] == '.') {
            mayuscula = 1;  // La siguiente letra debe ser mayúscula después de un punto
        } else if (isalpha(cadena[i])) {
            if (mayuscula) {
                cadena[i] = toupper(cadena[i]);  // Convierte a mayúscula
                mayuscula = 0;  // La siguiente letra debe ser minúscula
            } else {
                cadena[i] = tolower(cadena[i]);  // Convierte a minúscula
            }
        }
    }
}

int main() {
    char cadena[81];  // Se asume que la cadena de entrada tiene una longitud máxima de 80 caracteres

    // Lee la cadena de entrada
    printf("Ingrese la cadena: ");
    fgets(cadena, sizeof(cadena), stdin);

    // Elimina el carácter de nueva línea de fgets si está presente
    for (int i = 0; cadena[i] != '\0'; i++) {
        if (cadena[i] == '\n') {
            cadena[i] = '\0';
            break;
        }
    }
    // Corrige las mayúsculas según la regla especificada
    corregirMayusculas(cadena);
    // Imprime el resultado
    printf("Salida corregida: %s\n", cadena);

    return 0;
}
