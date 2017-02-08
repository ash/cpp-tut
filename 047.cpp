#include <iostream>
#include <set>

using namespace std;

int main() {
    set<char> s;

    s.insert('a');
    s.insert('b');
    s.insert('a');
    s.insert('c');

    for (set<char>::const_iterator iter = s.begin(); iter != s.end(); iter++) {
        cout << *iter << endl;
    }

    cout << "\n";

    s.erase('b');

    for (set<char>::const_iterator iter = s.begin(); iter != s.end(); iter++) {
        cout << *iter << endl;
    }

    if (s.find('a') != s.end()) {
        cout << "a exists" << "\n";
    }
    else {
        cout << "a does not exist" << "\n";
    }

    if (s.find('b') != s.end()) {
        cout << "b exists" << "\n";
    }
    else {
        cout << "b does not exist" << "\n";
    }
}
