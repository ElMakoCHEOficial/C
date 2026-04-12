#include <stdio.h>
#include <string.h>
void Leercad(char cadena[]);
long int Caballito(char cadena[], long int v_plana, long int v_subida, long int v_bajada);
int main() {
    long int v_plana,v_subida,v_bajada, tiempo;
    char cadena[1001];
    //printf("Escribe las velocidades: \n");
    scanf("%ld %ld %ld", &v_plana,&v_subida,&v_bajada);
    //printf("Escribe como es el terreno: \n");
    scanf("\n %[^\n]", cadena);
    tiempo=Caballito(cadena,v_plana,v_subida,v_bajada);
    printf("%ld", tiempo);
    return 0;
}

long int Caballito(char cadena[], long int v_plana, long int v_subida, long int v_bajada){
    long int planos=0,subidas=0,bajadas=0;
    for (long int i=0;cadena[i]!='\0';i++){
        if(cadena[i]=='-'){
            planos++;
        } else if(cadena[i]=='/'){
            subidas++;
        } else if(cadena[i]=='\\'){
            bajadas++;
    }
    }
    return v_plana*planos+v_bajada*bajadas+v_subida*subidas;
}
