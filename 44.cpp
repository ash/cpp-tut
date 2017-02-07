#include <iostream>

using namespace std;

// associativity of operators

int main() {
    int a = 30;
    int b = 20;
    int c = 10;

    int d = a - b - c; // left-associative
    // int d = (a - b) - c;
    cout << d << endl;

    int e = a = b = c; // right-associative
    // int e = (a = (b = c));
    cout << e << endl;
}
