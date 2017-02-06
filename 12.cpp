#include <iostream>

using namespace std;

// operators

int main() {
    int i;
    i = 42; // assignment

    int j;
    //i + j; // arithmetic +, - , /, *

    cout << 10 % 3 << "\n"; // mudulo
    // 10 / 3 = 3.333(3)
    // 10 = 3*3 + 1

    cout << 10 / 3 << "\n";
    cout << 10.0 / 3 << "\n";
    cout << 10 / 3.0 << "\n";

    float a = 10;
    cout << a / 3 << "\n";

    // compound assignment
    int n = i;
    n += 2; // n = n + 2;
    // -=, /=, *=, %=
    cout << n << "\n";

    // increment ++, decrement --
    int x = 10;
    x++; // x = x + 1
    cout << x << "\n";

    --x;
    cout << x << "\n";

    int y = 5;
    int z = y + 6;
    cout << y << ' ' << z << "\n";

    int y1 = 5;
    int z1 = y1++ + 6; // 5 + 6
    cout << y1 << ' ' << z1 << "\n";

    int y2 = 5;
    int z2 = ++y2 + 6; // 6 + 6
    cout << y2 << ' ' << z2 << "\n";

    int yy = 5;
    int zz = yy++ * --yy;
    int zzz = yy++ * ++yy;
    cout << zz << ' ' << zzz << "\n";
    
    return 0;
}

