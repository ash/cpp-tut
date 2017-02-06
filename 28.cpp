#include <iostream>

using namespace std;

// switch

int main() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "i = " << i << ", j = " << j << "\n";
            if (i + j > 5) break;
        }
    }
}
