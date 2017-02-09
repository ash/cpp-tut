#include <iostream>
#include <deque>

using namespace std;

int main() {
    deque<int> d;

    for (int i = 0; i != 10; i++) {
        d.push_back(2 * i);
    }
    for (int i = 0; i != 10; i++) {
        d.push_front(-2 * i);
    }

    d.pop_front();

    for (auto x : d) {
        cout << x << "\n";
    }
}
