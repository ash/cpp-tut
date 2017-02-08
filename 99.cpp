#include <iostream>

using namespace std;

// destructor

class C {
    char* s;
public:
    C() {
        cout << "constructor\n";
        s = new char[1000];
    }
    ~C() {
        cout << "destructor\n";
        delete s;
    }
};

void f() {
    cout << "entered f()\n";
    //{
        C c;
    //}
    cout << "exiting f()\n";
}

int main() {
    cout << "before f()\n";
    f();
    cout << "after f()\n";
}
