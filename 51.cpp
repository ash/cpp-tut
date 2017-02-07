#include <iostream>

using namespace std;

// functions

void func() {
    cout << "nothing\n";
}

void func1(void) {
    cout << "also nothing\n";
}

int main() {
    func();
    func1();
}
