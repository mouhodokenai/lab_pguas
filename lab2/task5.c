#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void main() {
	int k = 5;
	double S = 0;
	int f = 1;

 	for (int i = 1; i <= k; i++) {
		f *= i;
	}

	double T = (k + 1.0) / f;

	while (T >= 0.01) {
		S += T;
		k++;
		f *= k;
		T = ((k + 1) / f);

	}

	printf("%d", S);
}