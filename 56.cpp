#include <iostream>

using namespace std;

// functions

int f(int x = 100) {
    return 2 * x;
}

int g(int x, int y = 100, int z = 200) {
    return x + y;
}

int main() {    
    cout << f(10) << endl; // 20
    cout << f() << endl; // 200

    cout << g(10, 11) << endl; // 21
    cout << g(10) << endl; // 110
}
