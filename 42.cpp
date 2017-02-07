#include <iostream>

using namespace std;

// boolean operators

int main() {
    bool a = true;
    bool b = false;

    bool var_or = a || b;
    bool var_and = a && b;

    cout << var_or << endl;
    cout << var_and << endl;

    int x = 10;
    int y = 20;

    if (x > 5 && y < 30) {
        cout << "ok\n";
    }
}