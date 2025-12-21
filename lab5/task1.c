#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

float g(float a, float b) {
	float res = (pow(a, 2) + pow(b, 2)) / (pow(a, 2) + 2 * a * b + 3 * pow(b, 2) + 4);
	return res;
}

void main() {
	float s, t;
	scanf("%f%f", &s, &t);

	printf("%f", (float)(g(1.2, s) + g(t, s) - g(2 * s - 1, s * t)));
}


