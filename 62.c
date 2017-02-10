#include <stdio.h>

// inline functions

int funcA() {
    return 111;
}

int funcB() {
    return 222;
}

int main() {
    int x = funcA() + funcB();

    printf("%i\n", x);
}
