#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> l;

    for (int i = 0; i != 5; i++) {
        l.push_back(i * 2);
    }

    cout << l.size() << "\n";

    for (list<int>::iterator t = l.begin(); t != l.end(); t++) {
        cout << (*t) << "\n";
    }

    cout << *l.begin() << "\n";
    cout << *l.rbegin() << "\n\n";

    for (list<int>::const_reverse_iterator r = l.rbegin(); r != l.rend(); r++) {
        cout << *r << "\n";
    }
}