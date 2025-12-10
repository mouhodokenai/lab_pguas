#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define n 10

int main() {

    double Ar[n];       
    double S = 0.0;  

    for (int i = 1; i <= n; i++) {
        S += 1.0 / i;     
        Ar[i - 1] = 1.0 / S; 
    }

    for (int i = 0; i < n; i++) {
        printf("Ar[%d] = %.6f\n", i , Ar[i]);
    }
}
