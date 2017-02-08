#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> q;

    q.push(7);
    q.push(8);

    cout << q.front() << ' ' << q.back() << "\n";
    q.pop();
    cout << q.front() << ' ' << q.back() << "\n";
    q.pop();
    cout << q.empty() << "\n";
}
