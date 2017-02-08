#include <iostream>

using namespace std;

class C {
   int d;
public:
    C(int n) : d(n) {}
    int get() const {return d;}
    void show();
};

void printC(const C* c) {
    cout << c->get() << endl;
}

void C::show() {
    printC(this);
}

int main() {
    C c(5);
    //printC(&c);
    c.show();
}
