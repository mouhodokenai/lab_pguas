#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char word[15];
    char res[3];

    scanf("%s", word);

    int len = strlen(word);

    res[0] = word[0];
    res[1] = word[len - 1];
    res[2] = '\0';

    printf("%s", res);

}
