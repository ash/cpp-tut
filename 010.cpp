#include <iostream>
#include <string>

using namespace std;

int main() {
    string s = "abcde";

    for (char c: s) { # C++11
        cout << c << endl;
    }

    return 0;
}
