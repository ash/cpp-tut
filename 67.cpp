#include <iostream>

using namespace std;

// function templates

template <typename T>
T divide(T x, T y) {
    return x / y;
}

int main() {
    cout << divide(10, 3) << endl;
    cout << divide(10.0, 3.0) << endl;
}
