#include "methods/my_put_string.h"
#include "../include/methods/my_put_char.h"
#include <string.h>

void my_put_string(char* str) {
    while(*str != '\0') {
        my_put_char(*str++);
    }
}