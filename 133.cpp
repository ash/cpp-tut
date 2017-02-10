#include <iostream>
#include <deque>

using namespace std;

int main() {
    deque<int> d;

    d.push_back(1);
    d.push_back(3);
    d.push_back(7);
    d.push_front(9);
    d.push_front(11);

    for (deque<int>::iterator iter = d.begin(); iter != d.end(); iter++) {
        cout << *iter << "\n";
    }

    for (deque<int>::reverse_iterator iter = d.rbegin(); iter != d.rend(); iter++) {
        cout << *iter << "\n";
    }
}
