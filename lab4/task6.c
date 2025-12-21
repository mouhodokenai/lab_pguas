#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 5
#define m 5

int main() {
    int Mat[n][m];
    int max = Mat[0][0];
    int row = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            Mat[i][j] = rand() % 100 + 1;
            printf("%4d ", Mat[i][j]);
            if (Mat[i][j] > max) {
                max = Mat[i][j];
                row = i;
            }
        }
        printf("\n");
    }

    for (int i = row; i < n - 1; i++) {
        for (int j = 0; j < m; j++) {
            Mat[i][j] = Mat[i + 1][j];
        }
    }
    printf("max = %d\n ", max);

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < m; j++) {
            printf("%4d ", Mat[i][j]);
        }
        printf("\n");
    }

}