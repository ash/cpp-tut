#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> v;

    for (int i = 0; i != 10; i++) {
        v.push_back(rand() % 100);        
    }

    for (list<int>::const_iterator iter = v.begin(); iter != v.end(); iter++) {
        cout << *iter << "\n";
    }

    v.sort();

    for (list<int>::const_iterator iter = v.begin(); iter != v.end(); iter++) {
        cout << *iter << "\n";
    }
}
