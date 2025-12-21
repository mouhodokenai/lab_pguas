#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void main() {
	int n;
	scanf("%d", &n);
	int S = 0;
	int f = 1;

	for (int i = 1; i <= n; i++) {
		f += i;
		S += pow((2 + (1 / f)), 2);
	}

	printf("%d", S);
}