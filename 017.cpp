#include <iostream>

using namespace std;

void f(int n = 5) {
    cout << n << "\n";
}

int main() {
    f(2);
    f();
}
