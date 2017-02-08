#include <iostream>
#include "102a.h"

using namespace std;

int main() {
    C c;
    cout << c.get() << endl;
    c.set(5);
    cout << c.get() << endl;
}
