#include <iostream>

using namespace std;

class C {
   int d;
public:
    C(const C& c) : d(c.d) {cout << "copy constructor\n";}
    C(int n)      : d(n)   {cout << "constructor\n";}
    int get() const {return d;}
};

void printC_by_ref(const C& c) {
    cout << "printC_by_ref()\n";
    cout << c.get() << endl;
}

void printC_by_val(const C c) {
    cout << "printC_by_val()\n";
    cout << c.get() << endl;
}

int main() {
    C c(5);
    printC_by_ref(c);
    printC_by_val(c);
}
