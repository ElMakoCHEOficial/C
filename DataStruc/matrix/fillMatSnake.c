#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    int matriz[m][n];

    int valor = 1;
    int filaInicio = 0, filaFin = m - 1;
    int colInicio = 0, colFin = n - 1;

    while (filaInicio <= filaFin && colInicio <= colFin) {
        // Mover de izquierda a derecha
        for (int j = colInicio; j <= colFin; ++j) {
            matriz[filaInicio][j] = valor++;
        }
        filaInicio++;

        // Mover de arriba a abajo
        for (int i = filaInicio; i <= filaFin; ++i) {
            matriz[i][colFin] = valor++;
        }
        colFin--;

        // Mover de derecha a izquierda
        if (filaInicio <= filaFin) {
            for (int j = colFin; j >= colInicio; --j) {
                matriz[filaFin][j] = valor++;
            }
            filaFin--;
        }

        // Mover de abajo a arriba
        if (colInicio <= colFin) {
            for (int i = filaFin; i >= filaInicio; --i) {
                matriz[i][colInicio] = valor++;
            }
            colInicio++;
        }
    }

    // Imprimir la matriz generada en espiral
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%d", matriz[i][j]);
            if (j < n - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
