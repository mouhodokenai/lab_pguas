#include <stdio.h>
#include <math.h>

void main() {
    const double a = 0.1;
    double x0 = 5.5;
    double x1 = 8.5;
    double dx = 0.2;
    double x, y;
    int steps = (x1-x0)/dx; 

    for (int i = 0; i <= steps; ++i) {

        x = x0 + i * dx;

        if (x > 7.0) {
            y = exp(3.0 * a * x);       
        }
        else if (x >= 6.0) {
            y = log10(fabs(a * x));     
        }
        else {
            y = pow(2.0, x);            
        }
        printf("%6.1f\t %12.3f\n", x, y);
    }
}
