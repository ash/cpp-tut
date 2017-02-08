#include <iostream>

using namespace std;

// initialization lists in constructors

class C {
    int d;
    int e;
public:    
    C(int n) : d(n), e(n * 2) {
        cout << "current value of d = " << d << endl;
    }
    int get_d() {return d;}
    int get_e() {return e;}
};

int main() {
    C c(5);
    cout << c.get_d() << endl; // 5
    cout << c.get_e() << endl; // 10
}
