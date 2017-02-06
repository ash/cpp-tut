#include <iostream>

using namespace std;

// * auto, C++11

int main() {
    int i = 7;
    double j = 5.5;

    cout << i << ' ' << j << "\n";

    auto a = 7;
    auto b = 5.5;
    
    cout << a << ' ' << b << "\n";

    cout << "size of i " << sizeof(i) << "\n";
    cout << "size of j " << sizeof(j) << "\n";
    cout << "size of a " << sizeof(a) << "\n";
    cout << "size of b " << sizeof(b) << "\n";

    decltype(i) i2 = 8; // C++11
    // int i2 = 8;
    cout << "size of i2 " << sizeof(i2) << "\n";

    return 0;
}
