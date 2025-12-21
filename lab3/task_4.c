#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define n 10

int main() {

    int Ar[n];
    int S = 0;
    int Q = 0;

    for (int i = 0; i < n; i++) {
        Ar[i] = rand() % 100 + 1;
    }

    for (int i = 0; i < n; i++) {
        if (Ar[i] % 7 == 0) {
            S += Ar[i];
            Q++;
        }
    }

    printf("amount = %d\n", S);
    printf("quantity = %d\n", Q);
}