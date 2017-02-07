#include <iostream>

using namespace std;

// overloading functions

int divide(int a, int b) {
    // cannot be with default argument now: divide(int a, int b = 0)
    cout << "Integer division\n";
    return a / b;
}

int divide(int a) {
    cout << "Integer division with one argument\n";
    return a / 10;
}

double divide(double a, double b) {
    cout << "Floating-point division\n";
    return a / b;
}

int main() {
    cout << divide(10) << endl;
    cout << divide(10, 3) << endl;
    // cout << divide(10, (double) 3) << endl; // ambiguos
    cout << divide(10.0, 3.0) << endl;
}

