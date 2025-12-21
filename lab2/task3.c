#include <stdio.h>
#include <math.h>

void main() {
    double x0 = -0.3;
    double x1 = 1.5;
    double dx = 0.3;
    double C = 1;
    double f = 1;
    double x, y;
    int steps = (x1 - x0) / dx;

    for (int k = 1; k <= 6; k++) {
        x = x0 + ((double) k * dx);
        f *= k;
        C *= (1.0 + ((sin(k * x)) / f));
    }
    printf("C=%.5f\n", C);
}
