#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << setw(10) << 8 << endl;
    cout << 9 << endl;

    cout.width(10);
    cout << 8 << endl;
    cout << 9 << endl;

    cout << setprecision(4) << 3.1415926 << "\n";

    cout << setw(10) << setfill('_') << "Yo" << endl;
    cout << setw(10) << setfill('_') << "Yo\n";

    cout << setbase(16) << 254 << endl;

    cout << hex << 254 << endl;
    cout << setiosflags(std::ios::showbase | std::ios::uppercase) << 254 << endl;

    cout << 123 << endl;

    cout << resetiosflags(std::ios::hex | std::ios::showbase | std::ios::uppercase) << 254 << endl;
    cout << 123 << endl;
}