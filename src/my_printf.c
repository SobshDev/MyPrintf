#include <stdarg.h>
#include "../include/methods/my_put_char.h"
#include "../include/methods/my_put_string.h"
#include "../include/methods/my_put_int.h"
#include "../include/methods/my_put_long_int.h"

int my_printf(const char *format, ...){

    va_list args;
    va_start(args, format);

    int longcount = 0;

    while (*format != '\0') {
        if (*format != '%') {
            my_put_char(*format);
            format++;
            continue;
        }

        format++;

        while (*format == 'l')
        {
            longcount++;
            format++;
        }

        switch (*format) {
            case '%' : {
                my_put_char('%');
                break;
            }
            case 'c' : {
                my_put_char(va_arg(args, int));
                break;
            }
            case 's' : {
                my_put_string(va_arg(args, char*));
                break;
            }
            case 'd' : {
                if(longcount == 2) {
                    ;
                } else if (longcount == 1) {
                    my_put_long_int(va_arg(args, long int));
                }
                else {
                    my_put_int(va_arg(args, int));
                }
                break;
            }
            default: {
                my_put_string("Error, Check your format!");
                break;
            }
        }

        format++;

    }

    va_end(args);
    return 0;
}