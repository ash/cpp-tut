#include <iostream>
#include <math.h>

constexpr int square(int x) {
    //std::cout << "square() called\n";
    return x * x;
}

constexpr auto three_quaters_of_pi = 3 * M_PI / square(2);

int main() {
    std::cout << three_quaters_of_pi << std::endl;
}
