#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> s; // FILO

    s.push(3); // adding on top of stack
    s.push(7);
    s.push(9);

    cout << "top = " << s.top() << "\n";

    s.pop(); // removing from top

    cout << "top = " << s.top() << "\n";
}