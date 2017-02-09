#include <iostream>
#include <typeinfo>

using namespace std;

class Class {
public:
    virtual void f() {}
};

class Derived1: public Class {
};
class Derived2: public Class {
public:
    virtual void f() {}
};

int main() {
    int i;
    cout << typeid(i).name() << "\n";

    float f;
    cout << typeid(f).name() << "\n";

    float* p;
    cout << typeid(p).name() << "\n";

    cout << typeid(Class).name() << "\n";

    Class c;
    Derived1 d1;
    Derived2 d2;
    cout << typeid(c).name() << "\n";
    cout << typeid(d1).name() << "\n";
    cout << typeid(d2).name() << "\n";

    Class *pc;
    pc = new Derived1();
    cout << typeid(pc).name() << "\n";

    pc = new Derived2();
    cout << typeid(pc).name() << "\n";
}