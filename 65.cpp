#include <iostream>

using namespace std;

// overloading functions

int divide(int a, int b) {
    cout << "Integer division\n";
    return a / b;
}

double divide(double a, double b) {
    cout << "Floating-point division\n";
    return a / b;
}

int main() {
    cout << divide(10, 3) << endl;
    cout << divide(10.0, 3.0) << endl;
}
