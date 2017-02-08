#include <iostream>

using namespace std;

class C {
    int d;
public:
    void set(int _d) {d = _d;}
    int get() {return d;}
    C(int _d = 0) {d = _d;}
};

int main() {
    C c;
    cout << c.get() << endl;
    c.set(5);
    cout << c.get() << endl;
}
