#include "methods/my_put_int.h"
#include "../../include/methods/my_put_char.h"
#include <stdbool.h>

void my_put_unsigned_int(unsigned int number){
    char str[12];
    bool negative = false;
    int i = 0;

    if (number < 0) {
        negative = true;
        number = -number;
    }

    do {
        str[i++] = number % 10 + '0';
        number /= 10;
    } while (number > 0);

    if (negative) {
        str[i++] = '-';
    }

    str[i] = '\0';

    for (int a = i - 1; a >= 0; a --) {
        my_put_char(str[a]);
    }
}
