#include <stdio.h>
#include <stdlib.h>

int main() {
    // char * gets(char * str);
    char buf[1000];

    while(gets(buf)) printf("%s\n", buf);
}
