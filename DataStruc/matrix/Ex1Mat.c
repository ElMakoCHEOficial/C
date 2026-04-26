
#include <stdio.h>
#include <string.h>

#define FILAS 4
#define COLUMNAS 4
#define DESCUENTO 10
int obtenerPrecio(char vajilla, int tamano, int precios[FILAS][COLUMNAS]) {
    // Convierte la letra de la vajilla a un índice (A: 0, B: 1, C: 2, D: 3)
    int indiceVajilla = vajilla - 'A';
    // Convierte el tamaño del plato a un índice (1: 0, 2: 1, 3: 2, 4: 3)
    int indiceTamano = tamano - 1;
    // Retorna el precio del plato correspondiente
    return precios[indiceVajilla][indiceTamano];
}
int main() {
    int precios[FILAS][COLUMNAS];
    // Leer la tabla de precios
    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS; ++j) {
            scanf("%d", &precios[i][j]);
        }
    }
    int n;
    scanf("%d", &n);
    int totalDescuento = 0;
    // Procesar platos rotos
    for (int i = 0; i < n; ++i) {
        char vajilla;
        int tamano;
        // Leer la descripción del plato roto
        scanf(" %c%d", &vajilla, &tamano);
        // Obtener el precio del plato roto
        int precioPlato = obtenerPrecio(vajilla, tamano, precios);
        // Si es el último plato de la vajilla, aplicar descuento
        if (tamano == 4) {
            precioPlato -= DESCUENTO;
        }
        // Sumar al total de descuento
        totalDescuento += precioPlato;
    }
    // Imprimir el monto total que te debieron descontar
    printf("%d\n", totalDescuento);
    return 0;
}
