#include <iostream>

using namespace std;

void f(const int& x) {
    x = 3;
}

int main() {
    int a = 5;
    f(a);
    cout << a << "\n";
}
