#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main() {

    char str1[100];
    char str2[100];
    char res[200];
    int j = 0;

    gets(str1);
    gets(str2);


    for (int i = 0; i < strlen(str1); i++) {
        if (!strchr(res, str1[i])) {  
            res[j++] = str1[i];
        }
    }

    for (int i = 0; i < strlen(str2); i++) {
        if (!strchr(res, str2[i])) { 
            res[j++] = str2[i];
        }
    }

    res[j] = '\0';

    printf("%s\n", res);

}




        