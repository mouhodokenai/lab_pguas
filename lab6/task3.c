#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main() {

    char str[100];
    gets(str);

    for (int i = 0; i < strlen(str); ++i) {
        char c = str[i];
        str[i] = (char)(c - 1);
    }

    printf("%s", str);
}