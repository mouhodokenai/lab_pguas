#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//#define n 10

int main() {

    const n;
    int min;
    int Ar[n];    
    int p = 1;

    scanf("%d", n);

    for (int i = 0; i < n; i++) {
        Ar[i] = rand() % 201 - 100;   // числа от -100 до 100
        printf("Ar[%d] = %d\n", i, Ar[i]);
    }
    min = Ar[0];
    for (int i = 0; i < n; i++) {
        p = Ar[i] * Ar[0];
        if (p < min) {
            min = p;
        }
    }
    printf("Min = %d\n", min);
}


