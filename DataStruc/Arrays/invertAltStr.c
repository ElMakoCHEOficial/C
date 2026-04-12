#include <stdio.h>
#include <string.h>
void intercalar(char *cad1, int tam1, char *cad2, int tam2){
    if (tam1<tam2){
        for (int i = 0; i <tam1; i++){
            printf("%c",*(cad1+i));
            printf("%c",*(cad2+i));
        }
        for (int i = tam1; cad2[i]!='\0'; i++)
            printf("%c",*(cad2+i));
        printf("\n");
    }else if (tam1>tam2){
        for (int i = 0; i <tam2; i++){
            printf("%c",*(cad1+i));
            printf("%c",*(cad2+i));
        }
        for (int i = tam2; cad1[i]!='\0'; i++)
            printf("%c",*(cad1+i));
        printf("\n");
    }else{
        for (int i = 0; cad2[i]!='\0'; i++){
            printf("%c",*(cad1+i));
            printf("%c",*(cad2+i));
        }
        printf("\n");
    }
}

void invertirArreglo(char *arr, int inicio, int fin) {
    if (inicio < fin) {
        // Intercambiar elementos en las posiciones inicio y fin
        int temp = arr[inicio];
        arr[inicio] = arr[fin];
        arr[fin] = temp;
        // Llamada recursiva para invertir el resto del arreglo
        invertirArreglo(arr, inicio + 1, fin - 1);
    }
}
int Leercad(char cadena[]){
    long int caracteres=0;
    for (int i=0;cadena[i]!='\0';i++){
        caracteres++;
    }
    return caracteres;
}

int main(){
    char palabra[1001];
    char palabra_inv[1001];
    char palabra2[1001];
    char palabra2_inv[1001];   
    //printf("Escribe la cadena:\n");
    scanf("\n %[^\n]", palabra);
    scanf("\n %[^\n]", palabra2);
    //Calc tamaños
    int chars1=Leercad(palabra);
    int chars2=Leercad(palabra2);
    //Invertir arr
    invertirArreglo(palabra,0,chars1-1);
    invertirArreglo(palabra2,0,chars2-1);
    //Crear una copia
    strcpy(palabra_inv,palabra);
    strcpy(palabra2_inv,palabra2);
    //Mostrar la inversion
    printf("%s\n",palabra_inv);
    printf("%s\n",palabra2_inv);
    //Regresar a su estado normal
    invertirArreglo(palabra,0,chars1-1);
    invertirArreglo(palabra2,0,chars2-1);
    //Intercalaciones
    intercalar(palabra,chars1,palabra2,chars2);
    intercalar(palabra2,chars2,palabra,chars1);
    intercalar(palabra,chars1,palabra_inv,chars1);
    intercalar(palabra2,chars2,palabra2_inv,chars2);
    return 0;    
}
