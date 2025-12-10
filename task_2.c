#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define n 10

int main() {

    int ArA[n];
    int ArB[n];

    for (int i = 0; i < n; i++) {
        ArA[i] = rand() % 100 + 1;
    }
    for (int i = 0; i < n; i++) {
        ArB[i] = ArA[i] * ArA[n - 1 - i];
        printf("%d\n", ArB[i]);
    }

}