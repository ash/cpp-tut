#include <iostream>
#include <array>
#include <stdlib.h>

using namespace std;

typedef array<int, 10> my_int_array_of_10_elements;

int main() {
    my_int_array_of_10_elements a;

    for (int i = 0; i != 10; i++) {
        a[i] = rand() % 100;
        // operator[](array<int, 10>, int);
    }

    for (int i = 0; i != 10; i++) {
        cout << a[i] << "\n";
    }

    cout << a.at(4) << endl;

    //cout << a.at(200) << endl;
    //a[200] = 300;
    //cout << a[200] << endl;

    for (int x : a) {
         cout << "\t" << x << "\n";
    }
}
