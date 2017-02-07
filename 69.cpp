#include <iostream>

using namespace std;

// namespaces and scoping

int main() {
    // cout << x << endl;

    int x = 5;

    {
        int x = 6;
        cout << x << endl;
    }

    cout << x << endl;
  
    for (int x = 0; x != 3; x++) {
        // ...
    }
    cout << x << endl;
}
