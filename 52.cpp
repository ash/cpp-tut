#include <iostream>

using namespace std;

// functions

void f(int x) {
    x = 20;
    cout << "inside: " << x << endl;
}

int main() {
    int x = 10;
    f(x);
    cout << x << endl;
}