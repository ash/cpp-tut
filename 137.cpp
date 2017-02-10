#include <iostream>

extern "C" int summate(int a, int b);

int main() {
    std::cout << summate(7, 8) << std::endl;
}
