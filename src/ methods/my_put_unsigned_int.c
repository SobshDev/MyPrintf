#include "../../include/methods/my_put_char.h"
#include <stdio.h>

void my_put_unsigned_int(unsigned int number) {
    char str[12];
    int i = 0;

    if (number < 0) {
        fprintf(stderr, "Unsigned number cant be negative.");
        return;
    }

    do {
        str[i++] = number % 10 + '0';
        number /= 10;
    } while (number > 0);

    str[i] = '\0';

    for (int a = i - 1; a >= 0; a --) {
        if (*str == '0') {
            fprintf(stderr, "Unsigned number is out of range. (Max : 4294967295).");
            break;
        }
        my_put_char(str[a]);
    }
}
