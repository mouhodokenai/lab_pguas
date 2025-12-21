#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

float perimetr(double a, double b, double h) {
    return a + b + 2 * sqrt(h * h + pow((a - b) / 2.0, 2));
}

int main() {
    float a1, b1, h1, a2, b2, h2;

    printf("the base and height of the first trapezoid: ");
    scanf("%f %f %f", &a1, &b1, &h1);

    printf("the base and height of the first trapezoid: ");
    scanf("%f %f %f", &a2, &b2, &h2);

    printf("sum of perimeters: %f\n", perimetr(a1, b1, h1) + perimetr(a2, b2, h2));
}
