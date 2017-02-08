#include <iostream>

using namespace std;

// delegating constructor, C++11

class C {
    int d;
    int e;
public:
    C(int n, int m) : d(n), e{m} {} // initialization list

    // C(int n, int m) {
    //     d = n;
    //     e = m;
    // }

    C(int n) : C(n, 2 * n) {}       // delegating constructor

    int get_d() {return d;}
    int get_e() {return e;}
};

int main() {
    C c1(5);
    cout << c1.get_d() << endl; // 5
    cout << c1.get_e() << endl; // 10

    C c2(5, 7);
    cout << c2.get_d() << endl; // 5
    cout << c2.get_e() << endl; // 7
}
