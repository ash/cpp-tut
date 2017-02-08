#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> q;

    q.push(7);
    q.push(8);

    cout << q.top() << "\n";
    q.pop();
    cout << q.top() << "\n";
    q.pop();
    cout << q.empty() << "\n";
}
