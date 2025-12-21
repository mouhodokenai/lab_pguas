#include <stdio.h>
#include <conio.h>
#include <math.h>
//лабораторная 1, задание 3
main()
{
	float x;
	scanf("%f", &x);
	if (x >= -2 && x < 2) {
		printf("%f", (pow(x, 2)));
	}
	else if (x < 2) {
		printf("%d", 4);
	}
	else if (x >= 2) {
		printf("%f", (pow(x, 2) + 4 * x + 5));
	}
}
