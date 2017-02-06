#include <iostream>

using namespace std;

// bitwise and boolean

int main() {
    int a = 2;

    int b = (2 & 3); //    0b00000010
                     //  & 0b00000011
                     // ______________
                     //    0b00000010 AND
    cout << b << "\n"; // 2

    int c = (2 | 3);  // 0b00000010 | 0b00000011 OR
    cout << c << "\n"; // 3

    int d = (2 ^ 3); //    0b00000010
                     //  ^ 0b00000011
                     // ______________
                     //    0b00000001 XOR
    cout << d << "\n"; // 1


    int e = !a; // boolean negation
    cout << e << "\n";

    bool f = !a; // boolean negation
    cout << f << "\n";

    int g = !!a; // double negation
    cout << g << "\n";

    return 0;
}
