#include <iostream>

using namespace std;

// arrays

int main() {
    int a[3][3];

    a[0][0] = 1;
    a[0][1] = 2;
    a[1][0] = 3;
    a[1][1] = 4;

    cout << a[0][0] << ", " << a[0][1] << ", " << a[1][0] << ", " << a[1][1] << "\n";
}
