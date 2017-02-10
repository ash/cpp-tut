#include <iostream>
#include <algorithm>
#include <array>
#include <cstdlib>

using namespace std;

int main() {
    typedef array<int, 10> myarray;
    
    myarray v;

    for (int i = 0; i != 10; i++) {
        v[i] = (rand() % 100);
    }

    for (myarray::iterator x = v.begin(); x != v.end(); x++) {
        cout << *x << "\n";
    }
    
    cout << "----\n";

    sort(v.begin(), v.begin() + 5);

    for (myarray::iterator x = v.begin(); x != v.end(); x++) {
        cout << *x << "\n";
    }
}
