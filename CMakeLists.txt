cmake_minimum_required(VERSION 3.28)
project(Printf C)

set(CMAKE_C_STANDARD 11)

include_directories(include)

add_executable(Printf
        src/main.c
        src/my_printf.c
        include/methods/my_put_char.h
        "src/ methods/my_put_char.c"
        include/methods/my_printf.h
        "src/ methods/my_put_string.c"
        "include/methods/my_put_string.h"
        "src/ methods/my_put_int.c"
        "include/methods/my_put_int.h"
        "src/ methods/my_put_long_int.c"
        "include/methods/my_put_long_int.h"
        "src/ methods/my_put_unsigned_int.c"
        "include/methods/my_put_unsigned_int.h")
