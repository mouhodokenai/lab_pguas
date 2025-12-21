#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define n 5
#define m 5

int main() {
    double Mat[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            Mat[i][j] = sin((pow(i, 2) + pow(j, 2)) / m);
            printf("%8.4f ", Mat[i][j]);
        }
        printf("\n");
    }

}