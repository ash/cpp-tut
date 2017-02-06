#include <iostream>

using namespace std;

// loops

int main() {
    int c = 0;
    for(;;) {
        c++;
        cout << c << "\n";

        if (c > 5) {
            cout << "end\n";
            break;
        }
    }

    int d = 0;
    while(1) {
        d++;
        cout << d << "\n";

        if (d > 5) {
            cout << "end\n";
            break;
        }
    }    
}
