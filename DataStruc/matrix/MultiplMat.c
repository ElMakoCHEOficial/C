#include <stdio.h>
int A[20][20], B[20][20], R[20][20];
int main() {
    // Tamaños de las matrices
    int m, n, o;
    scanf("%d %d %d", &m, &n, &o);
    // Declaración de las matrices A, B y R
    // int A[m][n], B[n][o], R[m][o];
    // Entrada de la matriz A
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &A[i][j]);
        }
    }
    // Entrada de la matriz B
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < o; ++j) {
            scanf("%d", &B[i][j]);
        }
    }
    // Calcular el producto de las matrices A y B
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < o; ++j) {
            R[i][j] = 0; //init
            for (int k = 0; k < n; ++k) {
                R[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    // Imprimir la matrices 
    printf("Matriz A:\n");
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < o; ++j) {
            printf("\t%d", A[i][j]);
            if (j < o - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("Matriz B:\n");

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < o; ++j) {
            printf("\t%d", B[i][j]);
            if (j < o - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("Matriz Resultante C:\n");
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < o; ++j) {
            printf("\t%d", R[i][j]);
            if (j < o - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
