#include <iostream>

using namespace std;

template<typename X>
X f(X a, X b) {
    return a + b;
}

int main() {
    cout << f<int>(4, 5) << endl;
    cout << f<double>(4.4, 5.5) << endl;
}
