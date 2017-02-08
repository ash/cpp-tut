#include <iostream>
#include <string>

using namespace std;

int main() {
    string s = "abcdef";

    for (string::const_iterator i = s.begin(); i != s.end(); i++) 
        cout << *i << "\n";

    for (auto i = s.begin(); i != s.end(); i++)
        cout << *i << "\n";

    for (auto x : s)
        cout << x << "\n";

    cout << s.length() << ' ' << s.size() << "\n";

    for (int i = 0; i != s.length(); i++)
        cout << s[i] << "\n";

    if (s.find('x') != string::npos) cout << "x in string\n";
    else cout << "x not in string\n";

    if (s.find('e') != string::npos) cout << "e in string\n";
    else cout << "e not in string\n";
}
