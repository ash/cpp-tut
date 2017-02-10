#include <iostream>
#include <string>

using namespace std;

int main() {
    string s ("abcdef");

    for (string::iterator i = s.begin(); i != s.end(); i++) {
        cout << *i << "\n";
    }

    for (auto c : s) {
        cout << c << "\n";
    }
    
    cout << s.size() << "\n";
    cout << s.length() << "\n";

    s[3] = '*';
    cout << s << "\n";

    // s.at(10) = '?'; // s[10]
    s.at(4) = '&';
    cout << s << "\n";


    string a = "alpha";
    string b = "beta";
    string c;
    c = a + b;

    cout << c << "\n";

    c += "!";
    c += '?';
    cout << c << "\n";
}