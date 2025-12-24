#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* Дан порядковый номер месяца(1, 2, ..., 12).Вывести
на экран его название(январь, февраль, ..., декабрь) */

int main() {

    int m;
    scanf("%d", &m);

    switch (m) {
    case 1:  printf("january");   break;
    case 2:  printf("february");  break;
    case 3:  printf("march");     break;
    case 4:  printf("april");     break;
    case 5:  printf("may");       break;
    case 6:  printf("june");      break;
    case 7:  printf("july");      break;
    case 8:  printf("august");    break;
    case 9:  printf("september"); break;
    case 10: printf("october");   break;
    case 11: printf("november");  break;
    case 12: printf("december");  break;
    default: printf("does not exist"); break;
    }

}