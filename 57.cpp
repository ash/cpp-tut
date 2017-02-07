#include <iostream>

using namespace std;

// functions

void f(const int &x) {
    int y = x;
    y = 20;
    cout << "inside: " << y << endl;
}

int main() {
    int x = 10;
    f(x);
    cout << x << endl;
}
