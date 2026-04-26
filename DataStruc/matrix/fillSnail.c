#include <stdio.h>

int main() {
    int M, N;
    scanf("%d %d", &M, &N);
    int matriz[M][N];
    int valor = 1;
    for (int i = 0; i < M; ++i) {
        // Si la fila es par, se llena de izquierda a derecha
        if (i % 2 == 0) {
            for (int j = 0; j < N; ++j) {
                matriz[i][j] = valor++;
            }
        } else {
            // Si la fila es impar, se llena de derecha a izquierda
            for (int j = N - 1; j >= 0; --j) {
                matriz[i][j] = valor++;
            }
        }
    }

    // Imprimir la matriz generada
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            printf("%d", matriz[i][j]);
            if (j < N - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
