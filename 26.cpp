#include <iostream>

using namespace std;

// loops

int main() {
    for (int c = 1; c != 10; c++) {
        if (c < 5) continue;
        cout << c << "\n";
    }

    for (int c = 1; c != 10; c++) {
        if (c >= 5) {
            cout << c << "\n";
        }
    }
}
