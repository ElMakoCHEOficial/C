#include <stdio.h>
#include <string.h>
void letras_(char cadena[], long int *vocales, long int *consonantes);
int main() {
    long int vocales=0, consonantes=0;
    char cadena[81];
    //printf("Escribe la cadena: \n");
    scanf("\n %[^\n]", cadena);
    letras_(cadena,&vocales,&consonantes);
    printf("%ld %ld", consonantes, vocales);
    return 0;
}
void letras_(char cadena[], long int *vocales, long int *consonantes){
    for (int i=0;cadena[i]!='\0';i++){
        if(cadena[i]=='A' || cadena[i]=='E' || cadena[i]=='I' || cadena[i]=='O'|| cadena[i]=='U'){
            (*vocales)++;
        } else{(*consonantes)++;}
    }

}
