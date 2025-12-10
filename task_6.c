#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define n 10

int main() {

    int Ar[n];
    int S = 0;
    int increasing = 1;

    for (int i = 0; i < n; i++) {
        Ar[i] = rand() % 100 + 1;
        printf("Ar[%d] = %d\n", i, Ar[i]);
    } 

    for (int i = 0; i < n - 1; i++) {
        if (Ar[i] >= Ar[i + 1]) {
            increasing = 0;
        }
    }

    if (increasing) printf("the sequence is increasing\n");
    else printf("the sequence is not increasing\n");
}