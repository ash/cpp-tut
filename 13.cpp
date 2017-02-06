#include <iostream>

using namespace std;

// type conversion, type cast

int main() {
    int i = 10;
    int j = 3;

    double z = i / j; // 3
    cout << z << "\n";

    double y = (double) i / j; // 3.333(3)
    cout << y << "\n";

    double y1 = i / (double) j; // 3.333(3)
    cout << y1 << "\n";

    double y2 = (double) (i / j); // 3
    cout << y2 << "\n";

    double y3 = double(i) / j; // 3.333(3)
    cout << y3 << "\n";

    return 0;
}

