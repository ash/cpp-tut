#include <iostream>

using namespace std;

// bitwise shift operators

int main() {
    int x;
    x = 2 << 3; // 0b00000010 ==> 0b00010000
    cout << x << "\n";

    short y = 10;
    y <<= 20;
    cout << y << "\n";

    // 42 = 2 + 4 * 10 = 2 * 10^0 + 4 * 10^1
    // 0b101 = 1 * 2^0 + 0 * 2^1 + 1 * 2^2 = 1 + 0 + 4 = 5
    // 0x23 = 3 * 16^0 + 2 * 16^1 = 3 + 32 = 35

    short z = 10; // 0b_
    //00001010 ==> 0b00000101
    z >>= 1; // 0b00000101 
    cout << z << "\n";

    z >>= 20; // z = z >> 20
    cout << z << "\n";

    short n1 = -2; // 0b111110 -> 0b111111
    n1 >>= 1;
    cout << n1 << "\n";

    unsigned short n2 = -2; // 0b111110 -> 0b011111
    n2 >>= 1;
    cout << n2 << "\n";

    int p = 2; // 0b000010
    p <<= 1;
    cout << p << "\n"; // 0b000100
    p <<= 1;
    cout << p << "\n";
    p <<= 1;
    cout << p << "\n";
    p <<= 1;
    cout << p << "\n";

    cout << (5 << 3) << "\n"; // 5 * 2^3 = 5 * 8 = 40
    cout << (80 >> 3) << "\n"; // 80 / 2^3 = 80 / 8 = 10
}
