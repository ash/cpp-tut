#include <iostream>

using namespace std;

class C {
    int d;
public:    
    C(int n) {
        cout << "constructor\n";
        d = n;
    }
    C(const C& c) {
        cout << "copy constructor\n";
        d = c.d;
    }
    int get() {
        return d;
    }
};

int main() {
    C c(3);
    C d = C(4);

    cout << c.get() << endl;
    cout << d.get() << endl;

    C e = c; // int x = y;
    cout << e.get() << endl;

    C f(d); // int x(y);
    cout << f.get() << endl;
}
