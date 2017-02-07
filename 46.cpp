#include <iostream>

using namespace std;

// enumerations

enum colour {red, green, blue, yellow};
enum fruit {apple = 10, pear, peach, banana};

enum class people {baby, child, teenager, adult};

int main() {
    cout << blue << "\n"; // 2
    cout << banana << "\n"; // 13

    cout << (int) people::child << "\n";
}
