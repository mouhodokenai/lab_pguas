#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int fac(int x) {
    if (x <= 1) {
        return 1;          
    }
    return x * fac(x - 1); 
}

void c(int n, int m){
    float part1 = fac(m) * fac(n);
    float part2 = fac(m + n);
    float res = (part1/part2);
    if (n > m) printf("%f", res);
    else printf("%s", "m<n or m=n");
}

void main() {
    float m, n;
    scanf("%f%f", &m, &n);
    c(m, n);
}
