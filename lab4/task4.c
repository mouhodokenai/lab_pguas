#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 6
#define m 6

int main() {
    int Mat[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            Mat[i][j] = rand() % 100 + 1;
            printf("%4d ", Mat[i][j]);
        }
        printf("\n");
    }

    int max = Mat[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {  
            if (Mat[i][j] > max) {
                max = Mat[i][j];
            }
        }
    }

    printf("%d\n", max);


}
