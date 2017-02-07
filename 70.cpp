#include <iostream>

using namespace std;

// namespaces and scoping

int x = 100;

int main() {
    cout << x << endl;

    int x = 5;

    cout << x << endl;
    cout << ::x << endl;
}
