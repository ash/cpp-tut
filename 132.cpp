#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> l;

    l.push_back(1);
    l.push_back(3);
    l.push_back(7);
    l.push_back(9);
    l.push_back(11);

    for (list<int>::iterator iter = l.begin(); iter != l.end(); iter++) {
        cout << *iter << "\n";
    }

    for (list<int>::reverse_iterator r = l.rbegin(); r != l.rend(); r++) {
        cout << *r << "\n";
    }

    
}
