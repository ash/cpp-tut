#include <iostream>

using namespace std;

int main() {
    for (int n = 0; n != 100; n++) {
        if (!(n%10)) {
            cout << n << "\n";
        }
    }
}
