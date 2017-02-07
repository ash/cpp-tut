#include <iostream>

using namespace std;

// functions

void f(int* p) {
    *p = 20;
    cout << "inside: " << *p << endl;
}

int main() {
    int x = 10;
    f(&x);
    cout << x << endl;
}
