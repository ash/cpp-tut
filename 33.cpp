#include <iostream>
#include <string>

using namespace std;

// copies files line by line
// use it like: a.exe < file.txt

int main() {
    string s;

    while(getline (cin, s)) {
        cout << s << "\n";
    }
}
