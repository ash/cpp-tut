#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
///    int i = 42;

    // char *  itoa ( int value, char * str, int base );

    char buf[1000];
    itoa(42, buf, 10);
    printf("%s\n", buf);
}
