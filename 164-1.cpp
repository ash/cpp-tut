#include <iostream>
#include <vector>

int main() {
    std::vector<int> odd_data {1, 3, 5, 7, 9};

    for (auto x : odd_data)
        std::cout << x << "\n";
}
