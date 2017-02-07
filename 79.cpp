#include <stdio.h>
#include <string.h>

int main() {
    char buf[1000] = "abc";
    printf("%s\n", buf);

    strcat(buf, " one");
    printf("%s\n", buf);

    strcat(buf, " two");
    printf("%s\n", buf);

    strcat(buf, " three");
    printf("%s\n", buf);
}
