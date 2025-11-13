// mymath.c
#include <math.h>
#include "mymath.h"

void grados_a_dms(double grados, int *g, int *m, double *s) {
    *g = (int)grados;
    double minutos_totales = (grados - *g) * 60;
    *m = (int)minutos_totales;
    *s = (minutos_totales - *m) * 60;
}

int es_primo(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

double radianes_a_grados(double rad) {
    return rad * (180.0 / 3.14159265358979323846); 
}

double grados_a_radianes(double deg) {
    return deg * (3.14159265358979323846/ 180.0);
}
