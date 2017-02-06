#include <iostream>

using namespace std;

void f(int a = 10, int b = 20) {
    cout << a << ", " << b << "\n";
}

int main() {
    f();
    f(4);
    f(4, 5);
}
