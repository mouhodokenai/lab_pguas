#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define n 10

int main() {

    int Ar1[n];
    int S = 0;


    for (int i = 0; i < n; i++) {
        Ar1[i] = rand() % 100 + 1;
    }

    for (int i = 1; i <= n; i++) {
        S += Ar1[i - 1] / (i + 1);
    }

    printf("%d ", S);

}