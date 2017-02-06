#include <iostream>

using namespace std;

// flow control

int main() {
    // if <condition> <expression>;
    if (true) cout << "ok\n";

    if (true)
        cout << "ok\n";

    if (true) {
        cout << "ok\n";
    }

    if (true) {
        cout << "ok\n";
        cout << "also ok\n";
    }

    if (false) {
        cout << "I'm if\n";
    }
    else {
        cout << "I'm else\n";
    }

    if (false)
        cout << "I'm if\n";
    else
        cout << "I'm else\n";

    if (false) cout << "I'm if\n";
    else cout << "I'm else\n";

    
    int i = 5;
    if (i > 3) {
        cout << "More than three\n";
    }
    else {
        cout << "Less than three\n";
    }

    if (i > 6) {
        cout << "More than six\n";
    }
    else if (i > 4) {
        cout << "More than four\n";
    }
    else {
        cout << "Less than four\n";
    }


    int n = 42;
    if (n) {
        cout << "Hey n\n";
    }

    int m = 0;
    if (!m) {
        cout << "Hey m\n";
    }
}
