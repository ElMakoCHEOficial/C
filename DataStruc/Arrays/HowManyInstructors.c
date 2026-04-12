#include <stdio.h>
#include <string.h>
long int Instructores(char cadena[]);
int main() {
    long int instructores;
    char cadena[1001];
    //printf("Escribe la lista de instructores: \n");
    scanf("\n %[^\n]", cadena);
    instructores=Instructores(cadena);
    printf("%ld", instructores);
    return 0;
}

long int Instructores(char cadena[]){
    long int espacios=0;
    for (long int i=0;cadena[i]!='\0';i++){
        if(cadena[i]==' '){
            espacios++;
        }
    }
    return espacios+1;
}
