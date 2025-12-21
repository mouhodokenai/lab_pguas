#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 5
#define m 5

int main() {
    int Mat[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            Mat[i][j] = rand() % 100 + 1;
            printf("%4d ", Mat[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for (int i = 0; i < n; i++) {
        int ok = 1;

        for (int j = 0; j < m; j++) {
            if (Mat[i][j] % 3 != 0) {
                ok = 0;
            }
        }

        if (ok==1) {
            printf("%d\n", i+1);
        }
    }
}