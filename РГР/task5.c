#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

#define n 10


int main() {

    int A[n], B[n], m = 0, temp;

    for (int i = 0; i < n; i++) {
        A[i] = rand() % 201 - 100;
        if (A[i] > 0) {
            B[m] = A[i]*3;
            m++;
        }
        printf("%d\n", A[i]);
    }
    printf("\n");

    for (int i = 0; i < m - 1; i++) {
        int min = i; 
        for (int j = i + 1; j < m; j++) {
            if (B[j] < B[min]) {
                min = j; 
            }
        }
        int temp = B[i];
        B[i] = B[min];
        B[min] = temp;
    }

    for (int i = 0; i < m; i++) {
        printf("%d\n", B[i]);
    }
}