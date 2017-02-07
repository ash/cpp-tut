#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "source";
    char* dest;

    dest = src;
    dest[0] = '!';

    printf("%s\n", dest);
    printf("%s\n", src);
}
