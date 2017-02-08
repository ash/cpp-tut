#include <iostream>

using namespace std;

union U {
    int x;
    int y;
    double z;
};

struct R {
    char typeofdata;
    U data;
};

void printR(R& r) {
    if (r.typeofdata == 'i') {
        cout << "integer: " << r.data.x << "\n";
    }
    else if (r.typeofdata == 'f') {
        cout << "floating-point: " << r.data.z << "\n";
    }
    else {
        cout << "unknown data type\n";
    }
}

int main() {
    U u;
    u.x = 10;
    u.y = 20;

    cout << u.x << ' ' << u.y << endl;
    cout << sizeof(u) << endl;

    u.z = 3.14;
    cout << u.z << ' ' << u.x << ' ' << u.y << endl;

    R r1;
    r1.typeofdata = 'i';
    r1.data.x = 42;
    printR(r1);

    R r2;
    r2.typeofdata = 'f';
    r2.data.z = 3.14;
    printR(r2);
}
