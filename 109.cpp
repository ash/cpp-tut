#include <iostream>

using namespace std;

class C;
void printC(const C* c);

class C {
   int d;
public:
    C(int d) {
        this->d = d;
    }
    // C(int n) {
    //     d = n;
    // }
    // C(int n) : d(n) {}
    int get() const {return d;}
    void show() {
        printC(this);
    };
};

void printC(const C* c) {
    cout << c->get() << endl;
}

int main() {
    C c(5);
    //printC(&c);
    c.show();
}
