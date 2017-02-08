#include <stdio.h>
#include <string.h>

int main() {
    int i = 42;
    char buf[100];
    //itoa(i, a, 10);
    sprintf(buf, "%i", i);
    puts(buf);    // '4', '2', 0
}
