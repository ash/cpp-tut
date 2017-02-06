#include <iostream>

using namespace std;

// postfixes in numeric literals

int main() {
    auto i = 7;
    auto j = 7L;
    auto k = 7LL;

    // U, UL, u, ul

    cout << sizeof(i) << "\n";
    cout << sizeof(j) << "\n";
    cout << sizeof(k) << "\n";

    auto f = 4.3F;
    auto d = 3.14;

    return 0;
}

