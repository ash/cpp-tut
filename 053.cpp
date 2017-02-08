#include <iostream>

using namespace std;

class C {
    int x;
public:
    C(int n): x(n) {}
    int get() {return x;}
};

ostream& operator<<(ostream& o, C& c) {
    o << '{' << c.get() << '}';
    return o;
}

int main() {
    C c(42);

    cout << c << endl;
}