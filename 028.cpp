#include <iostream>

using namespace std;

int main() {
    int a = 10;
    int b = 11;
    double f = 3.14;

    int c {a};
    cout << c << "\n";

    int d {a + b};
    cout << d << "\n";

    int e {f};
    // int e {static_cast<int>(f)};
    // int e = f;
    // int e (f);
    cout << e << "\n";
}
