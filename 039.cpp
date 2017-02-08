#include <iostream>
#include <deque>

using namespace std;

int main() {
    deque<int> d;
    for (int i = 0; i != 10; i++) {
        d.push_back(i);
        d.push_front(-i);
    }

    for (int i = 0; i != d.size(); i++) {
        cout << d[i] << "\n";
    }
}
