#include <iostream>

using namespace std;

// comma operator

int main() {
    int i = 5;
    i = (i++, i++, i); // 7
    cout << i << "\n";

    return 0;
}
