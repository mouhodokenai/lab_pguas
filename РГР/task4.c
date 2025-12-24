#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {

	int n;
	double scur = 0, res = 0;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		scur += sin(i);
		res += 1 / scur;
	}

	printf("%f", res);
}