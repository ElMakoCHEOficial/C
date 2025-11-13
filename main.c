// main.c
#include <stdio.h>
#include "mymath.h"
int main() {
    int g, m;
    double s;
    grados_a_dms(45.6789, &g, &m, &s);
    printf("45.6789° = %d° %d' %.2f\"\n", g, m, s);
    printf("¿7 es primo? %s\n", es_primo(7) ? "Sí" : "No");
    printf("¿10 es primo? %s\n", es_primo(10) ? "Sí" : "No");
    printf("1 rad = %.2f grados\n", radianes_a_grados(1.0));
    printf("180 grados = %.2f rad\n", grados_a_radianes(180.0));
    return 0;
}
