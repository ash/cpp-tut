#include <iostream>

using namespace std;

// functions

void func(int x) {
    if (x > 5) return;

    cout << "x <= 5\n";
}

int main() {
    func(10);
    func(2);
}
