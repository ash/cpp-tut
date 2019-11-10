#include <iostream>
#include <vector>

int main() {
    std::vector<int> data {10, 20, 30, 40};

    for (std::vector<int>::iterator i = data.begin();
        i != data.end(); i++) {
        std::cout << *i << "\n";
    }
}
