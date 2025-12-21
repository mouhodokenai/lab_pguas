#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>

main() {
	float x, y, z, max, min;
	scanf("%f%f%f", &x, &y, &z);

	if ((x + y + z) > (x * y * z)) {
		max = (x + y + z);
	}
	else {
		max = (x * y * z);
	}
	if (x < y && x < (z / 3)) {
		min = x;
	}
	else if (y < x && y < (z / 3)) {
		min = y;
	}
	else {
		min = z / 3;
		printf("%f", min + max);
	}
}