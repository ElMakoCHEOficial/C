#include <stdio.h>

#define MAX_N 100

int esCuadradoSemimágico(int n, int matriz[MAX_N][MAX_N]) {
    // Calcular la suma de la primera fila como referencia
    int sumaReferencia = 0;
    for (int j = 0; j < n; ++j) {
        sumaReferencia += matriz[0][j];
    }

    // Verificar las sumas de las filas
    for (int i = 1; i < n; ++i) {
        int sumaFila = 0;
        for (int j = 0; j < n; ++j) {
            sumaFila += matriz[i][j];
        }
        if (sumaFila != sumaReferencia) {
            return 0;  // No es cuadrado semimágico
        }
    }

    // Verificar las sumas de las columnas
    for (int j = 0; j < n; ++j) {
        int sumaColumna = 0;
        for (int i = 0; i < n; ++i) {
            sumaColumna += matriz[i][j];
        }
        if (sumaColumna != sumaReferencia) {
            return 0;  // No es cuadrado semimágico
        }
    }

    // Verificar la suma de la diagonal principal
    int sumaDiagonalPrincipal = 0;
    for (int i = 0; i < n; ++i) {
        sumaDiagonalPrincipal += matriz[i][i];
    }
    if (sumaDiagonalPrincipal != sumaReferencia) {
        return 0;  // No es cuadrado semimágico
    }

    // Verificar la suma de la diagonal secundaria
    int sumaDiagonalSecundaria = 0;
    for (int i = 0; i < n; ++i) {
        sumaDiagonalSecundaria += matriz[i][n - 1 - i];
    }
    if (sumaDiagonalSecundaria != sumaReferencia) {
        return 0;  // No es cuadrado semimágico
    }

    // Si ha pasado todas las verificaciones, es un cuadrado semimágico
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);

    int matriz[MAX_N][MAX_N];

    // Leer la matriz
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Verificar si la matriz es un cuadrado semimágico y mostrar el resultado
    int resultado = esCuadradoSemimágico(n, matriz);
    printf("%d\n", resultado);

    return 0;
}
