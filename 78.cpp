#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "source";

    char copy[100];
    strcpy(copy, src);
    printf("%s\n", copy);

    copy[0] = '!';
    printf("%s\n", copy);
    
    printf("%s\n", src);
}
