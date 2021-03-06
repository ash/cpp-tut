#include <iostream>

constexpr int factorial(int n) {
    int r = 1;
    do r *= n; while (--n);
    return r;
}

int main() {
    constexpr auto f5 = factorial(5);
    std::cout << f5 << std::endl;
}
