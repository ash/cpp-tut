#include <iostream>

constexpr int square(int x) {
    //std::cout << "square(x) called\n";
    return x * x;
}

constexpr auto n = square(10);

int main() {
    std::cout << n << "\n";

    return 0;
}
