#include <stdio.h>

// Función recursiva para calcular el coeficiente binomial y contar llamadas
int coeficienteBinomial(int N, int K, int *llamadas) {
    // Incrementa el contador de llamadas
    (*llamadas)++;
    // Casos base
    if (K == 0 || K == N) {
        return 1;
    }
    // Llamadas recursivas según la fórmula recursiva del coeficiente binomial
    return coeficienteBinomial(N - 1, K, llamadas) + coeficienteBinomial(N - 1, K - 1, llamadas);
}
int main() {
    // Entrada de datos
    int N, K;
    scanf("%d %d", &N, &K);
    // Inicializa el contador de llamadas
    int llamadas = 0;
    // Llama a la función recursiva para calcular el coeficiente binomial
    int resultado = coeficienteBinomial(N, K, &llamadas);
    // Salida de resultados
    printf("%d %d\n", resultado, llamadas);
    return 0;
}
