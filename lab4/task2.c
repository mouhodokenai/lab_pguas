#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 5
#define m 5

int main() {
    int Mat[n][m];
    int b[n];


    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < m; j++) {
            Mat[i][j] = rand() % 201 - 100;
            if (Mat[i][j] > 0) {
                count++;
            }
        }
        b[i] = count; 
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%4d ", Mat[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++) {
        printf("b[%d] = %d\n", i, b[i]);
    }

}
