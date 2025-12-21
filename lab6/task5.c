#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    char str1[8];
    char str2[8];
    int i;
    int j = 6;
   
    gets(str1);

    for (i = 0; i < 7; i++) {
        str2[i] = str1[j];
        j--;
    }

    str2[i] = '\0';

   if (strcmp(str1, str2) == 0) printf("%s", "true");
   else printf("%s", "false");
}

