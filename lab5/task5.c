#include <stdio.h>
#include <math.h>
#define n 15 

int square(int x) {
    if (x < 0)
        return 0;
    int r = (int)sqrt(x);
    return (pow(r, 2) == x);
}

int main() {
    int c = 0;
    int Ar[n];

    for (int i = 0; i < n; i++) {
        Ar[i] = rand() % 201 - 100;
        printf("%d ", Ar[i]);
        if (square(Ar[i])) {
            c++;
        }
    }
    printf("Amount: %d\n", c);
}
