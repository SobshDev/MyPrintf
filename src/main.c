#include <stdio.h>
#include "methods/my_printf.h"
unsigned int a = 4294967295;

int main(void){
    my_printf("%u" , a);

    return 0;
}