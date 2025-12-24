#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    int z, a;

    scanf("%d", &a);

    if (a > 0) z = 1;
    else if (a == 0) z = 0;
    else z = -1;

    printf("%d", z);

}
