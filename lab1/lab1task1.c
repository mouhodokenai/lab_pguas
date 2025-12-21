#include <stdio.h>
#include <conio.h>
#include <math.h>

main() {
    float x = 0.5, a = 2.0;
    const float PI = 3.14159;

    float sqrt_part = sqrt(exp(2 * cos(x * a)));
    float acos_part = acos(x * a);
    float ln_part = log(abs(acos_part));
    float fullterm = sqrt_part * ln_part - pow(cos(x * a * PI), 2);
 
    if (acos_part == 0) {
        printf("%s", &"ln(0) not defined");
    }
    else {
        printf("%f", &fullterm);
    }
}

