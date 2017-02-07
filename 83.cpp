#include <stdio.h>
#include <stdlib.h>

int main() {
    char ch;
    while((ch = getchar()) != -1) printf("[%c]\n", ch);
}
