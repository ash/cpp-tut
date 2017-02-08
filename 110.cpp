#include <iostream>

using namespace std;

// friend functions and classes

class C;
void printC(const C* c);

class C {
   int d;
public:
    C(int n) : d(n) {}
    int get() const {return d;}
    void show() {
        cout << this << endl;
        printC(this);
    };
    friend void printC(const C* c);
    friend class D;
};

class D {
public:
    void f() {
        C c(123);
        cout << c.d << endl;
    }
};

void printC(const C* c) {
    cout << c->d << endl;
}

int main() {
    C c1(5);
    C c2(6);

    c1.show();
    c2.show();

    cout << sizeof(C) << endl;

    D d;
    d.f();
}
