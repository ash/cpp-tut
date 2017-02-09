#include <iostream>

using namespace std;

template<typename T>
class C {
    T value;
public:
    void set(T x) {value = x;}
    T get() {return value;}
};

// class C {
//     int value;
// public:
//     void set(int x) {value = x;}
//     int get() {return value;}
// };

// class D {
//     double value;
// public:
//     void set(double x) {value = x;}
//     double get() {return value;}
// };

int main() {
    C<int> c;
    c.set(14);
    cout << c.get() << endl;

    C<double> d;
    d.set(3.14);
    cout << d.get() << endl;

    // double x = 0.1, y = 0.2, z = 0.3;
    // double r = x + y - z;
    // cout << r;
}
