#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define n 7 

int main() {

    int M[n][n], temp;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            M[i][j] = rand() % 100 + 1;
            printf("%4d ", M[i][j]);
        }
        printf("\n");
    }

    int A[n];
    for (int i = 0; i < n; i++) {
        A[i] = M[i][i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (A[j] > A[j + 1]) {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d\n", A[i]);
    }

}
