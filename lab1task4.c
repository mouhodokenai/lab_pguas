#include <stdio.h>
#include <conio.h>
#include <math.h>

main() {
	float x, y, rsmall = 0.5, rbig = 1, d;
	scanf("%f%f", &x, &y);

	d = sqrt(pow(x, 2) + pow(y, 2));

	if (d >= rsmall && d <= rbig) {
		printf("%s", &("a point inside the area"));
	}
	else {
		printf("%s", &("a point isn't inside the area"));
	}
}