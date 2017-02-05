#include <iostream>

using namespace std;

int f() {
    static int c = 0;
    return c++;
}

int main() {
    for (int i = 0; i < 10; i++)
        cout << f() << "\n";
}
