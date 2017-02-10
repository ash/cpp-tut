#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << setw(10) << 42 << "\n";
    cout << setw(10) << 13242 << "\n";

    cout << setw(10) << setfill('0') << 546 << "\n";
    cout << 78 << "\n";

    cout << setprecision(4) << 3.1415926 << "\n";

    cout << setbase(16) << 95 << "\n";
    cout << 95 << "\n"; // still 16 base
    cout << setbase(10);

    cout << (ios::showbase | ios::uppercase) << "\n";

    cout << setiosflags(ios::showbase | ios::uppercase) << 95 << "\n";
    cout << resetiosflags(ios::showbase | ios::uppercase) << 95 << "\n";
}