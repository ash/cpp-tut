#include <iostream>

using namespace std;

// flow control

int main() {
    // while <condition> <statement>;

    int c = 10;
    while (c) {
        cout << c << "\n";
        c--;
    }

    cout << "\n";

    int d = 0;
    while (d <= 10) {
        cout << d << "\n";
        d++;
    }

    cout << "\n";

    int e = 10;
    while (e--) {
        cout << e << "\n";
    }
    
    cout << "\n";

    int f = 10;
    while (--f) {
        cout << f << "\n";
    }

    cout << "\n";

    // infinite loop
    /*
    cout << "g:\n";
    int g = 0;
    while (++g) {
        cout << g << "\n";
    }
    cout << "\n";
    */

    cout << "h:\n";
    int h = 0;
    while (h++) {
        cout << h << "\n";
    }

    // do-while loop
    // while <condition> <statement>;
    // do <statement> while <condition>;

    int z = 10;
    do {
        cout << "z = " << z << "\n";
    } while (z--);

    int x = 10;
    do {
        cout << "x = " << x << "\n";
    } while (--x);

    int y = 0;
    do {
        cout << "y = " << y << "\n";
    } while (y++ < 10);

    return 0;
}
