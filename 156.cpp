// RTTI

#include <iostream>
#include <typeinfo>

using namespace std;

int main() {
    int i;
    cout << typeid(i).name() << "\n";

    double d;
    cout << typeid(d).name() << "\n";

    cout << typeid(cout).name() << "\n";
}