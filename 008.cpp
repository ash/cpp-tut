#include <iostream>
#include <string>

using namespace std;

int main() {
    string s = "Hello, World!";

    cout << s << "\n";

    string s1("constructor");
    string s2 {"uniform initializer"};

    cout << s1 << "\n";
    cout << s2 << "\n";
}
