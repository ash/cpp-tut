#include <stdio.h>
#include <stdlib.h>

int main() {
    // char * gets(char * str);
    char buf[1000];

    for(;;) {
        char* result = gets(buf);
        if (result == NULL) break;
        printf("%s\n", buf);
    }
}
