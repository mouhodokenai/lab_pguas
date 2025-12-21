#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h> 

int sign(int a) {
	if (a > 0) return 1;
	if (a == 0) return 0;
	else return -1;
}

void main() {
	float x, y;
	scanf("%f%f", &x, &y);
	int z = sign(x) + sign(y);
	printf("%d", z);
}