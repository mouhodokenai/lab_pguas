#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 5

int main() {
    int Mat[n][n];

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {

            if (i == j) Mat[i][j] = i * (j + 1);

            else Mat[i][j] = 0;

            printf("%4d ", Mat[i][j]);
        }
        printf("\n");
    }

}
