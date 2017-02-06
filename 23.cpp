#include <iostream>

using namespace std;

// for loop

int main() {
    int c;
    for (c = 0; c < 10; c++) {
        cout << c << "\n";
    }

    int d = 0;
    for (; d < 10; d++) {
        cout << d << "\n";
    }

    for (int e = 0; e < 10; e++) {
        cout << e << "\n";
    }

    cout << "---\n";
    for (int f = 10; f; f--) {
        cout << f << "\n";
    }

    cout << "---\n";
    for (int g = 10; g--; ) {
        cout << g << "\n";
    }
}
