#include <stdio.h>

void invertir(int S[], int inicio, int fin) {
    while (inicio < fin) {
        // Intercambia S[inicio] y S[fin]
        int temp = S[inicio];
        S[inicio] = S[fin];
        S[fin] = temp;

        inicio++;
        fin--;
    }
}

void inversion_recursiva(int S[], int inicio, int fin) {
    // Invierte el orden de los elementos de S
    invertir(S, inicio, fin);

    // Si S tiene más de dos elementos, ejecuta el algoritmo recursivamente
    if (fin - inicio > 1) {
        int mitad = (inicio + fin) / 2;
        inversion_recursiva(S, inicio, mitad);     // Mitad izquierda de S
        inversion_recursiva(S, mitad + 1, fin);    // Mitad derecha de S
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int S[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &S[i]);
    }
    // Llama a la función de inversión recursiva
    inversion_recursiva(S, 0, n - 1);
    // Imprime la secuencia invertida
    for (int i = 0; i < n; i++) {
        printf("%d ", S[i]);
    }
    return 0;
}
