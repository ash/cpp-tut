#include <iostream>

using namespace std;

// nullptr

void f(int) {
    cout << "f(int)\n";
}

void f(int*) {
    cout << "f(int*)\n";
}

int main() {
    int v = 4;
    int* p = &v;

    f(v);
    f(p);

    p = NULL;
    // f(NULL);

    f(nullptr);
}
