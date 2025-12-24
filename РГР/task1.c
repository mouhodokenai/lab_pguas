#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    int n, a;

    scanf("%d%d", &n, &a);

    if (n % a == 0) printf("true");
    else  printf("false");

}
