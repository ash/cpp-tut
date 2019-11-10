#include <iostream>
#include <vector>

int main() {
    std::vector<int> data {10, 20, 30, 40};

    for (auto x : data) {
        std::cout << x << "\n";
    }
}
