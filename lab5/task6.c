#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void bisquare(int a, int b, int c) {
	int D = b * b - 4 * a * c;

	if (D > 0) {
		float t1 = (b * (-1) + sqrt(D)) / (2 * a);
		float t2 = ((b * (-1)) - sqrt(D)) / (2 * a);
		float x1 = sqrt(t1);
		float x2 = -sqrt(t1);
		float x3 = sqrt(t2);
		float x4 = -sqrt(t2);
		printf("x1 = %.2f, x2 = %.2f, x3 = %.2f, x4 = %.2f\n", x1, x2, x3, x4);
	}
	if (D == 0) {
		float t1 = (b * (-1)) / (2 * a);
		float x1 = sqrt(t1);
		float x2 = (-1) * sqrt(t1);
		printf("x1 = %.2lf, x2 = %.2lf\n", x1, x2);
	}
	if (D < 0) printf("%s\n", "error, D < 0");;

}

void main() {
	float a1, b1, c1;
	float a2, b2, c2;

	printf("input a1, b1, c1: \n");
	scanf("%f %f %f", &a1, &b1, &c1);

	printf("solve 1: ");
	bisquare(a1, b1, c1);

	printf("input a2, b2, c2: \n");
	scanf("%f %f %f", &a2, &b2, &c2);

	printf("solve 2: ");
	bisquare(a2, b2, c2);


}

