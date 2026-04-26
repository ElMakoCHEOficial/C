#include <stdio.h>

#define MAX_N 100

void multiplicarSubmatrices(int n, int A[MAX_N][MAX_N], int p, int q) {
    int resultado[n/2][n/2];

    // Realizar la multiplicación de las submatrices
    for (int i = 0; i < n/2; ++i) {
        for (int j = 0; j < n/2; ++j) {
            resultado[i][j] = 0;
            for (int k = 0; k < n/2; ++k) {
                resultado[i][j] += A[p + i][q + k] * A[p + n/2 + i][q + k];
            }
        }
    }

    // Imprimir el resultado
    for (int i = 0; i < n/2; ++i) {
        for (int j = 0; j < n/2; ++j) {
            printf("%d", resultado[i][j]);
            if (j < n/2 - 1) {
                printf(" ");
            }
        }
        printf("\n");
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

    int p, q;
    scanf("%d %d", &p, &q);

    // Verificar que las submatrices sean válidas
    if (p + n/2 > n || q + n/2 > n) {
        printf("Las submatrices no son válidas.\n");
        return 1;
    }

    // Realizar la multiplicación de las submatrices y mostrar el resultado
    multiplicarSubmatrices(n, A, p, q);

    return 0;
}
