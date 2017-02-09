#include <iostream>

using namespace std;

template<typename T>
T divide(T a, T b) {
    return a / b;
}

// int divide(int a, int b) {
//     return a / b;
// }

// double divide(double a, double b) {
//     return a / b;
// }

int main() {
    cout << divide<int>(10.0, 3) << endl;
    cout << divide<double>(10.0, 3.0) << endl;
}
