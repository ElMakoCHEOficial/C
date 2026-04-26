#include <stdio.h>
#define MAX_N 20
void girarMatriz(int n, int A[MAX_N][MAX_N]) {
    // Crear una matriz auxiliar para almacenar la matriz girada
    int girada[MAX_N][MAX_N];
    // Realizar la operación de giro a la derecha
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            girada[j][n - 1 - i] = A[i][j];
        }
    }
    // Copiar la matriz girada de vuelta a la matriz original
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            A[i][j] = girada[i][j];
        }
    }
}
int main() {
    int n;
    scanf("%d", &n);
    int A[MAX_N][MAX_N];
    // Leer la matriz A
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &A[i][j]);
        }
    }
    // Realizar la operación de giro a la derecha y mostrar la matriz resultante
    girarMatriz(n, A);
    // Imprimir la matriz resultante
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%d", A[i][j]);
            if (j < n - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
