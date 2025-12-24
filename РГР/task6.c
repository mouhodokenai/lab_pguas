#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

#define n 10

int main() {
    int A[n];
    int P = 1;  
    int N = 0;       
    int O = 0;        
    for (int i = 0; i < n; i++) {
        A[i] = rand() % 201 - 100;
        printf("%d ", A[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++) {
        if (A[i] < 0 && N == 0) N = i + 1;
        if (A[i] > 0) P *= A[i];
        if (A[i] == 1) O++;
    }
    if (N > 0) printf("first negative: %d\n", N);
    printf("product of positive: %d\n", P);
    printf("equal to 1: %d\n", O);
}
