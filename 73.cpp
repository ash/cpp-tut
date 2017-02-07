#include <iostream>

using namespace std;

// dynamic memory

int main() {
    int size = 10;

    int* a;
    a = new int[size];
    a[4] = 44;
    cout << a[4] << endl;

    delete a;

    a = new int[size * 2];
    a[14] = 144;
    cout << a[14] << endl;    
}
