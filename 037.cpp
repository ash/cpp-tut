#include <iostream>
#include <array>
#include <stdio.h>

using namespace std;

int main() {
    array<int, 10> a;
    
    for (int i = 0; i != 10; i++) {
        a[i] = 2 * i;
    }

    for (int i = 0; i != 10; i++) {
        cout << a[i] << endl;
    }

    for (int n : a) {
        cout << "\t" << n << endl;
    }


    //int size = 5;
    const int size = 5;
    array<int, size> b;
    cout << b.size() << endl;

    b.at(2) = 2;
    cout << b.at(2) << endl;
}
