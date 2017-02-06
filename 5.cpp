#include <iostream>

using namespace std;

// initialization variables

int main() {
    int variable; // declaration
    float another_variable; // declaration

    int a = 42; // initialization
    int b (42); // constructor-initialization
    int c {42}; // uniform initialization, C++11, use --std=c++11

    cout << a << ' ' << b << ' ' << c << "\n";

    int j;
    j = 50; // assignment

    return 0;
}
