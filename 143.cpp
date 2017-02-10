#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> q; // FIFO

    q.push(3); // adding to the back
    q.push(7);
    q.push(9);

    cout << "front = " << q.front() << "\n";
    cout << "back = " << q.back() << "\n";

    q.pop(); // removing from the front

    cout << "front = " << q.front() << "\n";
    cout << "back = " << q.back() << "\n";
}
