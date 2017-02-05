#include <iostream>

using namespace std;

int main() {
    int oct = 0755;
    int bin = 0b100;
    int hex = 0xFA;

    cout << oct << "\n";
    cout << bin << "\n";
    cout << hex << "\n";

    long l = 7L;
    cout << sizeof(7) << "\n";
    cout << sizeof(7L) << "\n";
}
