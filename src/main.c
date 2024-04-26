#include <stdio.h>
#include "methods/my_printf.h"
#include <limits.h>
long long int a = 4294967295;

int main(void){
    my_printf("%lld" , LLONG_MIN);

    return 0;
}