#include <stdio.h>

int main() {
    // Tamaño de la matriz A
    int m, n;
    scanf("%d %d", &m, &n);

    // Declaración de la matriz A
    int A[m][n];

    // Entrada de la matriz A
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &A[i][j]);
        }
    }

    // Imprimir la matriz transpuesta A^T
    for (int j = 0; j < n; ++j) {
        for (int i = 0; i < m; ++i) {
            printf("%d", A[i][j]);
            if (i < m - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
