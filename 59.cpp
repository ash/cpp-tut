#include <iostream>

using namespace std;

// static variables    

int f() {
    static int x = 1;

    x++;

    return x;
}

int main() {
    cout << f() << endl;
    cout << f() << endl;
    cout << f() << endl;
}