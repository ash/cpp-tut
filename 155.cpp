#include <cstdio>
#include <cstdarg>
#include <iostream>

int f(int n, ...) { // ellipsis
    va_list list;
    va_start(list, n);

    int sum = 0;
    for (int i = 0; i != n; i++) {
        int val = va_arg(list, int);
        sum += val;
    }
    va_end(list);

    return sum;
}

int main() {
    printf("%i\n",     42);
    printf("%i, %s\n", 42, "str");
    
    std::cout << f(2, 4, 5) << "\n";
    std::cout << f(4, 7, 8, 20, 100) << "\n";
}