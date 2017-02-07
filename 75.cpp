#include <stdio.h>
#include <string.h>

// C strings

int main() {
    char s[] = "my long string";
    puts(s);


    for (char ch : s) { // C++11
        putchar(ch);
    }
    putchar('\n');

    int len = strlen(s);
    printf("Length of '%s' is %i (0x%02X hexadecimal)\n", s, len, len);

    double pi = 3.1415926;
    printf("pi = %.10g\n", pi);
}
