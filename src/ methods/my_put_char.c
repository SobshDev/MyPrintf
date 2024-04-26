#include <unistd.h>

void my_put_char(char c) {
    write(STDOUT_FILENO, &c , sizeof(char));
}
