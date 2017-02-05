#include <iostream>

using namespace std;

int main() {
    auto i = 100;
    auto s = "string";

    cout << i << "\n";
    cout << s << "\n";

    decltype(i) j = 42;
    cout << sizeof(j) << "\n";
    cout << j << "\n";
}
