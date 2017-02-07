#include <iostream>

using namespace std;

// auto and uniform initialization

int main() {
    int a = 42;
    int b (42);
    int c {42}; // C++11

    double pi = 3.14;
    
    int p = pi;
    cout << p << endl;

    int q (pi);
    cout << q << endl;

    int r {static_cast<int>(pi)};
    cout << r << endl;
}
