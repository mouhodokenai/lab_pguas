#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str1[100];
    char str2[100];
    int j = 0;
    int flag = 0;

    scanf("%s", str1);

    for (int i = 0; i < strlen(str1); i++) {
        if (str1[i] == '(') flag = 1;
        if (flag == 1) {
            if (str1[i + 1] != ')') {
                str2[j] = str1[i + 1];
                j++;
            }
        }
        if (str1[i] == ')') {
            str2[j] = '\0';
            flag = 0;
        }
    }

    printf("%s", str2);

}

