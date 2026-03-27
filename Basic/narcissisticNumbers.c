#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, res = 0;
    int digits = 0;
    // printf("Introduce el numero: ");
    scanf("%d", &numero);
    int copianum = numero, img = numero;
    if (numero < 0)
        numero *= -1;
    if (numero == 0 || numero < 10)
        digits = 1;
    else{
        while (numero > 0){
            numero = numero / 10;
            digits++;
        }
        int copia = digits;
        numero = copianum; // Restauramos el valor original de 'numero' para el siguiente bucle
        while (copianum > 0) {
            int base = copianum % 10;
            int potencia = 1;
            for (int i = 0; i < copia; i++)
                potencia *= base;
            res += potencia;
            copianum /= 10;
        }
        if (img == res)
            printf("Es Narcisista");
        else 
            printf("No es Narcisista");
    }
    return 0;
}
