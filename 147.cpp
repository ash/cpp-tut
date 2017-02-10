#include <iostream>
#include <set>

using namespace std;

int main() {
    set<char> s;

    s.insert('a');
    s.insert('b');
    s.insert('c');

    s.insert('b');

    cout << s.size() << "\n"; // 3 elements in set

    //s.erase
    //s.find
}