#include <iostream>

using namespace std;

// :: scope (resolution) operator
// out-of-line definition

class C {
    int d;
public:
    void set(int);
    int get();
    C(int = 0);
    ~C();
};

void C::set(int _d) {
    d = _d;
}

int C::get() {
    return d;
}

C::C(int _d) {
    d = _d;
}

C::~C() {
}

int main() {
    C c;
    cout << c.get() << endl;
    c.set(5);
    cout << c.get() << endl;
}
