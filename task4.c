#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void main() {
    int n;
    int four = 0; 
    int d;

    scanf("%d", &n);

    while (n >= 1) {
        if ((n % 10) == 4) {
        four++;
        }
        n /= 10;
    }

    if (four > 0)
        printf("true\n");
    else
        printf("false\n");

}