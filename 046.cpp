#include <iostream>
#include <queue>
#include <time.h>

using namespace std;

int main() {
    priority_queue<int> q;

    srand(time(nullptr));

    for (int i = 0; i != 10; i++)
        q.push(rand() % 100);

    while (!q.empty()) {
        cout << q.top() << "\n";
        q.pop();
    }
}
