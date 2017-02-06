#include <stdio.h>

int func1() {
    return 101;
}

inline int func2() {
    return 202;
}

int main() {
    int i = func1();
    int j = func2();

    printf("%i\n", i + j);
}
