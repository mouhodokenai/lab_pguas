#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[12]; 

    scanf("%s", str); 

    for (int i = 0; i < 11; i++) {
        if (islower(str[i])) {      
            str[i] = toupper(str[i]); 
        }
    }

    printf("%s\n", str);

}
