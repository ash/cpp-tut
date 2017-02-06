#include <iostream>

using namespace std;

// switch

int main() {
    for (int x = 1; x <= 5; x++) {
        cout << x << " ";
        switch (x) {
            case 1: 
                cout << "one\n"; 
                break;
            case 2: cout << "two\n"; break;
            case 3: cout << "three\n"; break;
            default: cout << "other\n";
        }
    }

    for (int y = 0; y <= 5; y++) {
        cout << y << " ";
        switch (y) {
            case 1:
            case 3:
            case 5: cout << "odd\n"; break;

            case 2:
            case 4:
            case 6: cout << "even\n"; break;
            
            default: cout << "zero\n";
        }
    }
}
