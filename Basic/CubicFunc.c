#include <stdio.h>
#include <limits.h> // Para utilizar INT_MIN e INT_MAX
int main() {
    // Entrada de datos
    int a, b, c, d, m, n;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &m, &n);
    // Inicialización de valores máximos y mínimos
    int max_value = INT_MIN;
    int min_value = INT_MAX;
    int max_point, min_point;
    // Evaluación de la función y búsqueda de máximos y mínimos
    for (int x = m; x <= n; x++) {
        int result = a * x * x * x + b * x * x + c * x + d;
        // Actualización de máximos y mínimos
        if (result > max_value) {
            max_value = result;
            max_point = x;
        }
        if (result < min_value) {
            min_value = result;
            min_point = x;
        }
    }
    // Salida de resultados
    printf("%d %d %d %d\n", max_value, min_value, max_point, min_point);
    return 0;
}
